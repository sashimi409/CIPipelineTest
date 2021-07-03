pipeline{

	agent any
	environment
	{
	GITHUB_TOKEN = credentials('github')
	}
		stages
		{
	
			stage('Build')
			{
				steps
				{
				echo 'Building the project with CMake'
				sh 'cmake . && make'
				}
			
			}

			stage('Test')
			{
				steps
				{
				echo 'Running Tests'
				sh 'ctest'
				
				}
			
			}
			stage('Release')
			{
				when
				{tag "release-*"}
				steps
				{
					echo 'Send to Github'
					
					/* a realease in github will need to be created before we can add artifacts */

					tag=$(git describe --tags)
					release=$(curl -XPOST -H "Authorization:token $GITHUB_TOKEN" --data "{\"tag_name\": \"$tag\"}" https://api.github.com/repos/sashimi409/CIPipelineTest/releases)


					/*The response will tell us the ID of the release we created */

					id=$(echo "$release" | sed -n -e 's/"id":\ \([0-9]\+\),/\1/p' | head -n 1 | sed 's/[[:blank:]]//g')

					/*Uploading the artifacts */

					curl -XPOST -H "Authorization:token $token" -H "Content-Type:application/octet-stream" --data-binary @artifact.zip https://uploads.github.com/repos/sashimi409/CIPipelineTest/releases/$id/assets?name=artifact.zip

				}
			}
		}
	}
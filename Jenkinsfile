pipeline{

	agent any
		stages{
	
			stage('Build')
			{
				steps
				{
				echo 'Building the project with CMake with friends to watch'
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
		}
	}
pipeline{

	agent any
		stages{
	
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
		}
	}
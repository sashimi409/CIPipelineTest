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
				{zs
				echo 'Running Tests'
				sh 'ctest'
				
				}
			
			}
		}
	}
#include <unistd.h>

void	ft_countdown(void){

	char	number;

	number='9';
	while(number >= '0')
	{
		write(1, &number,1);
		number--;
	}
	write(1,"\n",1);
}

int	main(void){
	ft_countdown();
}

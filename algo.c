#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const int *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void pa(int *stack_a, int size_a, int *stack_b, int size_b) 
{
    int i;

	i = 1;
	stack_a[size_a + 1] = '\0';
	while (stack_a[size_a - 1])
	{
        stack_a[size_a] = stack_a[size_a - 1];
		size_a--;
    }
	if (size_b > 0) 
	{
        stack_a[0] = stack_b[0];
		i = 1;
		while (stack_b[i])
		{
        	stack_b[i - 1] = stack_b[i];
			i++;
    	}
		stack_b[i - 1] = '\0';
    }
}

void pb(int *stack_a, int size_a, int *stack_b, int size_b) 
{
    int i;

	i = 1;
	printf("a");
	stack_b[size_b + 1] = '\0';
	while (stack_b[size_b - 1])
	{
        stack_b[size_b] = stack_b[size_b - 1];
		size_b--;
    }
	if (size_a > 0) 
	{
        stack_b[0] = stack_a[0];
		i = 1;
		while (stack_a[i])
		{
        	stack_a[i - 1] = stack_a[i];
			i++;
    	}
		stack_a[i - 1] = '\0';
    }
}

void	ra(int *stack_A, int len_A)
{
	int	temp;
	int	i;

	if (len_A > 0) 
	{
		temp = stack_A [0];
		i = 1;
		while (stack_A[i])
		{
        	stack_A[i - 1] = stack_A[i];
			i++;
    	}
		stack_A[i - 1] = temp;
    }

}
void	rb(int *stack_B, int len_B)
{
	int	temp;
	int	i;

	if (len_B > 0) 
	{
		temp = stack_B [0];
		i = 1;
		while (stack_B[i])
		{
        	stack_B[i - 1] = stack_B[i];
			i++;
    	}
		stack_B[i - 1] = temp;
    }

}
void	rrb(int *stack_B, int len_B)
{
	int	temp;

	if (len_B > 0) 
	{
		temp = stack_B[len_B - 1];
		while (len_B > 1)
		{
        	stack_B[len_B - 1] = stack_B[len_B - 2];
			len_B--;
    	}
		stack_B[0] = temp;
	}
}

void	rra(int *stack_A, int len_A)
{
	int	temp;

	if (len_A > 0) 
	{
		temp = stack_A[len_A - 1];
		while (len_A > 1)
		{
        	stack_A[len_A - 1] = stack_A[len_A - 2];
			len_A--;
    	}
		stack_A[0] = temp;
    }
}

void	sa(int *stack_A, int len_A)
{
	int	temp;

	if (len_A > 1)
	{
		temp = stack_A[0];
		stack_A[0] = stack_A[1];
		stack_A[1] = temp;
	}
}

void	sort_last(int *stack_A)
{
	if (stack_A[0] <= stack_A[1] && stack_A[1] <= stack_A[2]) //123
	{
		return;
	}
	if (stack_A[0] <= stack_A[1] && stack_A[1] >= stack_A[2] && stack_A[0] > stack_A[2]) //132
	{
		sa(stack_A, ft_strlen(stack_A));
		ra(stack_A, ft_strlen(stack_A));
	}
	if (stack_A[0] <= stack_A[1] && stack_A[1] >= stack_A[2]) //231
		rra(stack_A, ft_strlen(stack_A));
	if (stack_A[0] >= stack_A[1] && stack_A[1] <= stack_A[2] && stack_A[0] < stack_A[2])// 213
		sa(stack_A, ft_strlen(stack_A));
	if (stack_A[0] >= stack_A[1] && stack_A[1] <= stack_A[2])// 312
		ra(stack_A, ft_strlen(stack_A));
	if (stack_A[0] >= stack_A[1] && stack_A[1] >= stack_A[2])// 321
	{
		sa(stack_A, ft_strlen(stack_A));
		rra(stack_A, ft_strlen(stack_A));
	}
}

void	sort_A(int *stack_A)
{
	int	temp;

	if (ft_strlen(stack_A) <= 1)
		return ;
	if ((ft_strlen(stack_A) == 2))
	{
		if(stack_A[1] >= stack_A[0])
			sa(stack_A, ft_strlen(stack_A));
		return;
	}
	sort_last(stack_A);
}

int	maxi(int *stack)
{
	int	i;
	int	maxi;
	int	adresse;

	i = 1;
	maxi = stack[0];
	adresse = 0;
	while (stack[i])
	{
		if (stack[i] > maxi)
		{
			maxi = stack [i];
			adresse = i;
		}
		i++;
	}
	return (adresse);
}

int	maxii(int *stack)
{
	int	i;
	int	maxi;

	i = 1;
	maxi = stack[0];
	while (stack[i])
	{
		if (stack[i] > maxi)
			maxi = stack [i];
		i++;
	}
	return (maxi);
}

void	set_at_placeb(int *stack_A, int *stack_B)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	printf("a");
	if (ft_strlen(stack_B) == 1)
		pb(stack_A, ft_strlen(stack_A), stack_B, ft_strlen(stack_B));
	else
	{
		while (stack_B[i] < stack_A[0] && stack_B[i])
			i++;
		while (stack_B[j] > stack_A[0] && stack_B[j])
			j++;
		if (i == ft_strlen(stack_B - 1))
		{
			if (maxi(stack_B) > (ft_strlen(stack_B) / 2))
			{
				while(stack_B[0] != maxii(stack_B))
					rb(stack_B, ft_strlen(stack_B));
			}
			else
			{
				while(stack_B[0] != maxii(stack_B))
					rrb(stack_B, ft_strlen(stack_B));
			}
		}
		else if (j == ft_strlen(stack_B - 1))
		{
			if (maxi(stack_B) > (ft_strlen(stack_B) / 2))
			{
				while(stack_B[0] != maxii(stack_B))
					rb(stack_B, ft_strlen(stack_B));
			}
			else
			{
				while(stack_B[0] != maxii(stack_B))
					rrb(stack_B, ft_strlen(stack_B));
			}
		}
		else
		{
			i = 0;
			while (!(stack_B[0] < stack_A[0]) || !(stack_B[ft_strlen(stack_B) - 1] > stack_A[0]))
				rb(stack_B, ft_strlen(stack_B));
		}
		pb(stack_A, ft_strlen(stack_A), stack_B, ft_strlen(stack_B));
	}
}

void	set_at_place(int *stack_A, int *stack_B)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stack_A[i] < stack_B[0] && stack_A[i])
		i++;
	while (stack_A[j] > stack_B[0] && stack_A[j])
		j++;
	if (i == ft_strlen(stack_A))
	{
		if (maxi(stack_A) > (ft_strlen(stack_A) / 2))
		{
			while(stack_A[0] != maxii(stack_A))
				ra(stack_A, ft_strlen(stack_A));
		}
		else
		{
			while(stack_A[0] != maxii(stack_A))
				rra(stack_A, ft_strlen(stack_A));
		}
	}
	else if (j == ft_strlen(stack_A))
	{
		if (maxi(stack_A) > (ft_strlen(stack_A) / 2))
		{
			while(stack_A[0] != maxii(stack_A))
				ra(stack_A, ft_strlen(stack_A));
		}
		else
		{
			while(stack_A[0] != maxii(stack_A))
				rra(stack_A, ft_strlen(stack_A));
		}
	}
	else
	{
		i = 0;
		while (!(stack_A[0] < stack_B[0]) || !(stack_A[ft_strlen(stack_B) - 1] > stack_B[0]))
			ra(stack_A, ft_strlen(stack_A));
	}
	pa(stack_A, ft_strlen(stack_A), stack_B, ft_strlen(stack_B));
}
/*
void	sort_all(int *stack_A)
{

}*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*t;

	i = 0;
	t = (char *)s;
	while (i < n)
	{
		t[i] = c;
		i++;
	}
	return (s);
}
void	push_swap(int *stack_A)
{
    int	i;
	int	*stack_B;

	i = 0;
	printf("a");
	stack_B = (int *)malloc(sizeof(int) * (ft_strlen(stack_A) + 1));
	stack_B[0] = '\0';
	printf("a");
	while (ft_strlen(stack_A) > 3)
	{
		if (ft_strlen(stack_B) == 0)
			pb(stack_A, ft_strlen(stack_A), stack_B, ft_strlen(stack_B));
		else
			set_at_placeb(stack_A, stack_B);
		printf("b");
	}
	printf("a");
	sort_A(stack_A);
	while (ft_strlen(stack_B) > 0)
	{
		printf("%lddebut", ft_strlen(stack_B));
		set_at_place(stack_A, stack_B);
	}
	free(stack_B);
	//sort_all();

}

int main() {
    int *stack_a;
	int i;

	i = 0;
	stack_a = malloc(sizeof(int) * 8);
	stack_a[0] = 1;
	stack_a[1] = 4;
	stack_a[2] = 7;
	stack_a[3] = 5;
	stack_a[4] = 2;
	stack_a[5] = 6;
	stack_a[6] = 3;
	stack_a[7] = '\0';
    // Printing the unsorted stack
    printf("Unsorted Stack A: ");
    while (stack_a[i])
	{
        printf("%d ", stack_a[i]);
		i++;
    }
    // Sorting stack a using bubble sort
    push_swap(stack_a);

    // Printing the sorted stack
	i = 0;
    printf("Sorted Stack A: ");
   	while (stack_a[i]) 
   	{
        printf("%d ", stack_a[i]);
		i++;
    }
    printf("\n");

    return 0;
}

int main()
{
        double gross_salary = prompt_for_gross( );
        double parking_cost = prompt_for_parking( );
        const double gym_membership_cost = 22.50;

        double computed_net_salary = net_salary( gross_salary, parking_cost, gym_membership_cost );

        printf( "The net salary is $%0.2lf.\n", computed_net_salary );
        puts( "Done." );

        return EXIT_SUCCESS;
}

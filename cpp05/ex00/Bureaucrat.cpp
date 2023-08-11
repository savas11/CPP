int Bureaucrat::GradeTooHighException()
{

}


int Bureaucrat::GradeTooLowException()
{

}

void const getName(void)
{
    return(this->_name);
}

std::string setName(std::string name)
{
    name = this->_name;
    return(name);
}
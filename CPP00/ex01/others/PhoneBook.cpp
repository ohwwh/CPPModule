/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:06:41 by mjung             #+#    #+#             */
/*   Updated: 2021/11/03 21:20:15 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

void PhoneBook::input_contact (int _idx)
{
    _idx = _idx;

    std::cout << "First name : ";
    std::getline(std::cin, first_name_);
    std::cout << "Last name : ";
    std::getline(std::cin, last_name_);
    std::cout << "Nick name : ";
    std::getline(std::cin, nick_name_);
    std::cout << "Phone number : ";
    std::getline(std::cin, phone_number_);
    std::cout << "darkest secret... : ";
    std::getline(std::cin, darkest_secret_);
}

void PhoneBook::print_page (void) const
{
    std::cout << "First name : " << first_name_ << std::endl;
    std::cout << "Last name : " << last_name_ << std::endl;
    std::cout << "Nick name : " << nick_name_ << std::endl;
    std::cout << "Phone number : " << phone_number_ << std::endl;
    std::cout << "Darkest secret : " << darkest_secret_ << std::endl;
}

void PhoneBook::print_column(std::string _text) const
{
    // std::sew = 너비 설정
    // std::right = 오른쪽 정렬
    if (_text.length() <= 10)
        std::cout << std::right << std::setw(10) << _text;
    else
    {
        _text =  _text.substr(0,9) + ".";
        std::cout << std::right << std::setw(10) << _text;
    }
}
void PhoneBook::print_privew(int _index) const
{
    print_column(std::to_string(_index));
    std::cout << "|";
    print_column(first_name_);
    std::cout << "|";
    print_column(last_name_);
    std::cout << "|";
    print_column(nick_name_);
    std::cout << "|";
    print_column(phone_number_);
    std::cout << "|";
    print_column(darkest_secret_);
    std::cout << std::endl;
}
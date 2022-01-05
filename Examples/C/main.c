// This file was generated by Examples/C/generate_main.py

#include "Helpers.h"
#include <stdio.h>

void BluetoothConnection();

void Commands();

void DataLogger();

void FileConverter();

void GetAvailablePorts();

void NetworkDiscovery();

void OpenAndPing();

void SerialConnection();

void SerialDiscovery();

void TcpConnection();

void UdpConnection();

void UsbConnection();

int main(int argc, const char* argv[])
{
    printf("Select example\n");
    printf("A. BluetoothConnection.c\n");
    printf("B. Commands.c\n");
    printf("C. DataLogger.c\n");
    printf("D. FileConverter.c\n");
    printf("E. GetAvailablePorts.c\n");
    printf("F. NetworkDiscovery.c\n");
    printf("G. OpenAndPing.c\n");
    printf("H. SerialConnection.c\n");
    printf("I. SerialDiscovery.c\n");
    printf("J. TcpConnection.c\n");
    printf("K. UdpConnection.c\n");
    printf("L. UsbConnection.c\n");
    switch (GetKey())
    {
        case 'A':
            BluetoothConnection();
            break;
        case 'B':
            Commands();
            break;
        case 'C':
            DataLogger();
            break;
        case 'D':
            FileConverter();
            break;
        case 'E':
            GetAvailablePorts();
            break;
        case 'F':
            NetworkDiscovery();
            break;
        case 'G':
            OpenAndPing();
            break;
        case 'H':
            SerialConnection();
            break;
        case 'I':
            SerialDiscovery();
            break;
        case 'J':
            TcpConnection();
            break;
        case 'K':
            UdpConnection();
            break;
        case 'L':
            UsbConnection();
            break;
    }
}
// This file was generated by x-IMU3-API/Rust/src/data_messages/generate_data_messages.py

#pragma once

#include "../../../C/Ximu3.h"

using namespace System;

namespace Ximu3
{
    public ref class LinearAccelerationMessage
    {
    internal:
        LinearAccelerationMessage(ximu3::XIMU3_LinearAccelerationMessage message) : message{ new ximu3::XIMU3_LinearAccelerationMessage{message} }
        {
        }

    public:
        ~LinearAccelerationMessage()
        {
            delete message;
        }

        property UInt64 Timestamp
        {
            UInt64 get()
            {
                return message->timestamp;
            }
        }

        property float WElement
        {
            float get()
            {
                return message->w_element;
            }
        }

        property float XElement
        {
            float get()
            {
                return message->x_element;
            }
        }

        property float YElement
        {
            float get()
            {
                return message->y_element;
            }
        }

        property float ZElement
        {
            float get()
            {
                return message->z_element;
            }
        }

        property float XAxis
        {
            float get()
            {
                return message->x_axis;
            }
        }

        property float YAxis
        {
            float get()
            {
                return message->y_axis;
            }
        }

        property float ZAxis
        {
            float get()
            {
                return message->z_axis;
            }
        }

        String^ ToString() override
        {
            return gcnew String(ximu3::XIMU3_linear_acceleration_message_to_string(*message));
        }

    private:
        ximu3::XIMU3_LinearAccelerationMessage* message;
    };
}
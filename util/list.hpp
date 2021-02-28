/*
        list.hpp
     Lists for use in Typo.
    Author: maDeveloper
    License: PSLv4
 */

#pragma once

namespace std {
    template <typename type, int max_size>
    class list {
        public:
            type data[max_size];

            int getIndex(type value) {
                for (int index = 0; index < (sizeof(this->data) / sizeof(*this->data)); index++) {
                    if (this->data[index] == value) {
                        return this->data[index];
                    }
                }
            } // std::list::getIndex

            int pushValue(type value) {
                for (int index = 0; index < (sizeof(this->data) / sizeof(*this->data)); index++) {
                    if (this->data[index] == nullptr) {
                        this->data[index] = value;
                    }
                } for (int index = 0; index < (sizeof(this->data) / sizeof(*this->data)); index++) {
                    if (this->data[index] == value) {
                        return this->data[index];
                    }
                }
            } // std::list::pushValue

            type deleteIndex(int index) {
                type deletedObject = this->data[index];
                this->data[index] = nullptr;

                return deletedObject;
            } // std::list::deleteIndex

            type insertValue(type value, int index) {
                this->data[index] = value;
            } // std::list::insertValue

            type valueOf(int index) {
                return this->data[index];
            } // std::list::valueOf

            int indexOf(type value) {
                for (int index = 0; index < (sizeof(this->data) / sizeof(*this->data); index++) {
                    if (this->data[index] == value) {
                        return this->data[index];
                    }
                }
            } // std::list::indexOf

            type operator[](int index) {
                return this->data[index];
            } // std::list::operator
    }; // std::list
}

#ifndef __PROPERTIES__H
#define __PROPERTIES__H

#define PROPERTY(type, name, method) \
        private: \
                type name##_; \
        public: \
                const type& name()const \
                { return name##_; } \
                void method(const type& value) \
                { name##_ = value; }
#endif//__PROPERTIES__H

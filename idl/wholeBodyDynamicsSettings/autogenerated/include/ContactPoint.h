/*
 * Copyright (C) 2006-2020 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

// Autogenerated by Thrift Compiler (0.12.0-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_STRUCT_CONTACTPOINT_H
#define YARP_THRIFT_GENERATOR_STRUCT_CONTACTPOINT_H

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

class ContactPoint :
        public yarp::os::idl::WirePortable
{
public:
    // Fields
    double x;
    double y;
    double z;

    // Default constructor
    ContactPoint();

    // Constructor with field values
    ContactPoint(const double x,
                 const double y,
                 const double z);

    // Read structure on a Wire
    bool read(yarp::os::idl::WireReader& reader) override;

    // Read structure on a Connection
    bool read(yarp::os::ConnectionReader& connection) override;

    // Write structure on a Wire
    bool write(const yarp::os::idl::WireWriter& writer) const override;

    // Write structure on a Connection
    bool write(yarp::os::ConnectionWriter& connection) const override;

    // Convert to a printable string
    std::string toString() const;

    // If you want to serialize this class without nesting, use this helper
    typedef yarp::os::idl::Unwrapped<ContactPoint> unwrapped;

    class Editor :
            public yarp::os::Wire,
            public yarp::os::PortWriter
    {
    public:
        // Editor: default constructor
        Editor();

        // Editor: constructor with base class
        Editor(ContactPoint& obj);

        // Editor: destructor
        ~Editor() override;

        // Editor: Deleted constructors and operator=
        Editor(const Editor& rhs) = delete;
        Editor(Editor&& rhs) = delete;
        Editor& operator=(const Editor& rhs) = delete;
        Editor& operator=(Editor&& rhs) = delete;

        // Editor: edit
        bool edit(ContactPoint& obj, bool dirty = true);

        // Editor: validity check
        bool isValid() const;

        // Editor: state
        ContactPoint& state();

        // Editor: start editing
        void start_editing();

#ifndef YARP_NO_DEPRECATED // Since YARP 3.2
        YARP_DEPRECATED_MSG("Use start_editing() instead")
        void begin()
        {
            start_editing();
        }
#endif // YARP_NO_DEPRECATED

        // Editor: stop editing
        void stop_editing();

#ifndef YARP_NO_DEPRECATED // Since YARP 3.2
        YARP_DEPRECATED_MSG("Use stop_editing() instead")
        void end()
        {
            stop_editing();
        }
#endif // YARP_NO_DEPRECATED

        // Editor: x field
        void set_x(const double x);
        double get_x() const;
        virtual bool will_set_x();
        virtual bool did_set_x();

        // Editor: y field
        void set_y(const double y);
        double get_y() const;
        virtual bool will_set_y();
        virtual bool did_set_y();

        // Editor: z field
        void set_z(const double z);
        double get_z() const;
        virtual bool will_set_z();
        virtual bool did_set_z();

        // Editor: clean
        void clean();

        // Editor: read
        bool read(yarp::os::ConnectionReader& connection) override;

        // Editor: write
        bool write(yarp::os::ConnectionWriter& connection) const override;

    private:
        // Editor: state
        ContactPoint* obj;
        bool obj_owned;
        int group;

        // Editor: dirty variables
        bool is_dirty;
        bool is_dirty_x;
        bool is_dirty_y;
        bool is_dirty_z;
        int dirty_count;

        // Editor: send if possible
        void communicate();

        // Editor: mark dirty overall
        void mark_dirty();

        // Editor: mark dirty single fields
        void mark_dirty_x();
        void mark_dirty_y();
        void mark_dirty_z();

        // Editor: dirty_flags
        void dirty_flags(bool flag);
    };

private:
    // read/write x field
    bool read_x(yarp::os::idl::WireReader& reader);
    bool write_x(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_x(yarp::os::idl::WireReader& reader);
    bool nested_write_x(const yarp::os::idl::WireWriter& writer) const;

    // read/write y field
    bool read_y(yarp::os::idl::WireReader& reader);
    bool write_y(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_y(yarp::os::idl::WireReader& reader);
    bool nested_write_y(const yarp::os::idl::WireWriter& writer) const;

    // read/write z field
    bool read_z(yarp::os::idl::WireReader& reader);
    bool write_z(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_z(yarp::os::idl::WireReader& reader);
    bool nested_write_z(const yarp::os::idl::WireWriter& writer) const;
};

#endif // YARP_THRIFT_GENERATOR_STRUCT_CONTACTPOINT_H

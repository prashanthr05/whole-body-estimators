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

#include <codyco/HomTransform.h>

namespace codyco {

// Default constructor
HomTransform::HomTransform() :
        WirePortable(),
        x(0),
        y(0),
        z(0),
        xx(0),
        xy(0),
        xz(0),
        yx(0),
        yy(0),
        yz(0),
        zx(0),
        zy(0),
        zz(0)
{
}

// Constructor with field values
HomTransform::HomTransform(const double x,
                           const double y,
                           const double z,
                           const double xx,
                           const double xy,
                           const double xz,
                           const double yx,
                           const double yy,
                           const double yz,
                           const double zx,
                           const double zy,
                           const double zz) :
        WirePortable(),
        x(x),
        y(y),
        z(z),
        xx(xx),
        xy(xy),
        xz(xz),
        yx(yx),
        yy(yy),
        yz(yz),
        zx(zx),
        zy(zy),
        zz(zz)
{
}

// Read structure on a Wire
bool HomTransform::read(yarp::os::idl::WireReader& reader)
{
    if (!read_x(reader)) {
        return false;
    }
    if (!read_y(reader)) {
        return false;
    }
    if (!read_z(reader)) {
        return false;
    }
    if (!read_xx(reader)) {
        return false;
    }
    if (!read_xy(reader)) {
        return false;
    }
    if (!read_xz(reader)) {
        return false;
    }
    if (!read_yx(reader)) {
        return false;
    }
    if (!read_yy(reader)) {
        return false;
    }
    if (!read_yz(reader)) {
        return false;
    }
    if (!read_zx(reader)) {
        return false;
    }
    if (!read_zy(reader)) {
        return false;
    }
    if (!read_zz(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool HomTransform::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(12)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool HomTransform::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_x(writer)) {
        return false;
    }
    if (!write_y(writer)) {
        return false;
    }
    if (!write_z(writer)) {
        return false;
    }
    if (!write_xx(writer)) {
        return false;
    }
    if (!write_xy(writer)) {
        return false;
    }
    if (!write_xz(writer)) {
        return false;
    }
    if (!write_yx(writer)) {
        return false;
    }
    if (!write_yy(writer)) {
        return false;
    }
    if (!write_yz(writer)) {
        return false;
    }
    if (!write_zx(writer)) {
        return false;
    }
    if (!write_zy(writer)) {
        return false;
    }
    if (!write_zz(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool HomTransform::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(12)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string HomTransform::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// Editor: default constructor
HomTransform::Editor::Editor()
{
    group = 0;
    obj_owned = true;
    obj = new HomTransform;
    dirty_flags(false);
    yarp().setOwner(*this);
}

// Editor: constructor with base class
HomTransform::Editor::Editor(HomTransform& obj)
{
    group = 0;
    obj_owned = false;
    edit(obj, false);
    yarp().setOwner(*this);
}

// Editor: destructor
HomTransform::Editor::~Editor()
{
    if (obj_owned) {
        delete obj;
    }
}

// Editor: edit
bool HomTransform::Editor::edit(HomTransform& obj, bool dirty)
{
    if (obj_owned) {
        delete this->obj;
    }
    this->obj = &obj;
    obj_owned = false;
    dirty_flags(dirty);
    return true;
}

// Editor: validity check
bool HomTransform::Editor::isValid() const
{
    return obj != nullptr;
}

// Editor: state
HomTransform& HomTransform::Editor::state()
{
    return *obj;
}

// Editor: grouping begin
void HomTransform::Editor::start_editing()
{
    group++;
}

// Editor: grouping end
void HomTransform::Editor::stop_editing()
{
    group--;
    if (group == 0 && is_dirty) {
        communicate();
    }
}
// Editor: x setter
void HomTransform::Editor::set_x(const double x)
{
    will_set_x();
    obj->x = x;
    mark_dirty_x();
    communicate();
    did_set_x();
}

// Editor: x getter
double HomTransform::Editor::get_x() const
{
    return obj->x;
}

// Editor: x will_set
bool HomTransform::Editor::will_set_x()
{
    return true;
}

// Editor: x did_set
bool HomTransform::Editor::did_set_x()
{
    return true;
}

// Editor: y setter
void HomTransform::Editor::set_y(const double y)
{
    will_set_y();
    obj->y = y;
    mark_dirty_y();
    communicate();
    did_set_y();
}

// Editor: y getter
double HomTransform::Editor::get_y() const
{
    return obj->y;
}

// Editor: y will_set
bool HomTransform::Editor::will_set_y()
{
    return true;
}

// Editor: y did_set
bool HomTransform::Editor::did_set_y()
{
    return true;
}

// Editor: z setter
void HomTransform::Editor::set_z(const double z)
{
    will_set_z();
    obj->z = z;
    mark_dirty_z();
    communicate();
    did_set_z();
}

// Editor: z getter
double HomTransform::Editor::get_z() const
{
    return obj->z;
}

// Editor: z will_set
bool HomTransform::Editor::will_set_z()
{
    return true;
}

// Editor: z did_set
bool HomTransform::Editor::did_set_z()
{
    return true;
}

// Editor: xx setter
void HomTransform::Editor::set_xx(const double xx)
{
    will_set_xx();
    obj->xx = xx;
    mark_dirty_xx();
    communicate();
    did_set_xx();
}

// Editor: xx getter
double HomTransform::Editor::get_xx() const
{
    return obj->xx;
}

// Editor: xx will_set
bool HomTransform::Editor::will_set_xx()
{
    return true;
}

// Editor: xx did_set
bool HomTransform::Editor::did_set_xx()
{
    return true;
}

// Editor: xy setter
void HomTransform::Editor::set_xy(const double xy)
{
    will_set_xy();
    obj->xy = xy;
    mark_dirty_xy();
    communicate();
    did_set_xy();
}

// Editor: xy getter
double HomTransform::Editor::get_xy() const
{
    return obj->xy;
}

// Editor: xy will_set
bool HomTransform::Editor::will_set_xy()
{
    return true;
}

// Editor: xy did_set
bool HomTransform::Editor::did_set_xy()
{
    return true;
}

// Editor: xz setter
void HomTransform::Editor::set_xz(const double xz)
{
    will_set_xz();
    obj->xz = xz;
    mark_dirty_xz();
    communicate();
    did_set_xz();
}

// Editor: xz getter
double HomTransform::Editor::get_xz() const
{
    return obj->xz;
}

// Editor: xz will_set
bool HomTransform::Editor::will_set_xz()
{
    return true;
}

// Editor: xz did_set
bool HomTransform::Editor::did_set_xz()
{
    return true;
}

// Editor: yx setter
void HomTransform::Editor::set_yx(const double yx)
{
    will_set_yx();
    obj->yx = yx;
    mark_dirty_yx();
    communicate();
    did_set_yx();
}

// Editor: yx getter
double HomTransform::Editor::get_yx() const
{
    return obj->yx;
}

// Editor: yx will_set
bool HomTransform::Editor::will_set_yx()
{
    return true;
}

// Editor: yx did_set
bool HomTransform::Editor::did_set_yx()
{
    return true;
}

// Editor: yy setter
void HomTransform::Editor::set_yy(const double yy)
{
    will_set_yy();
    obj->yy = yy;
    mark_dirty_yy();
    communicate();
    did_set_yy();
}

// Editor: yy getter
double HomTransform::Editor::get_yy() const
{
    return obj->yy;
}

// Editor: yy will_set
bool HomTransform::Editor::will_set_yy()
{
    return true;
}

// Editor: yy did_set
bool HomTransform::Editor::did_set_yy()
{
    return true;
}

// Editor: yz setter
void HomTransform::Editor::set_yz(const double yz)
{
    will_set_yz();
    obj->yz = yz;
    mark_dirty_yz();
    communicate();
    did_set_yz();
}

// Editor: yz getter
double HomTransform::Editor::get_yz() const
{
    return obj->yz;
}

// Editor: yz will_set
bool HomTransform::Editor::will_set_yz()
{
    return true;
}

// Editor: yz did_set
bool HomTransform::Editor::did_set_yz()
{
    return true;
}

// Editor: zx setter
void HomTransform::Editor::set_zx(const double zx)
{
    will_set_zx();
    obj->zx = zx;
    mark_dirty_zx();
    communicate();
    did_set_zx();
}

// Editor: zx getter
double HomTransform::Editor::get_zx() const
{
    return obj->zx;
}

// Editor: zx will_set
bool HomTransform::Editor::will_set_zx()
{
    return true;
}

// Editor: zx did_set
bool HomTransform::Editor::did_set_zx()
{
    return true;
}

// Editor: zy setter
void HomTransform::Editor::set_zy(const double zy)
{
    will_set_zy();
    obj->zy = zy;
    mark_dirty_zy();
    communicate();
    did_set_zy();
}

// Editor: zy getter
double HomTransform::Editor::get_zy() const
{
    return obj->zy;
}

// Editor: zy will_set
bool HomTransform::Editor::will_set_zy()
{
    return true;
}

// Editor: zy did_set
bool HomTransform::Editor::did_set_zy()
{
    return true;
}

// Editor: zz setter
void HomTransform::Editor::set_zz(const double zz)
{
    will_set_zz();
    obj->zz = zz;
    mark_dirty_zz();
    communicate();
    did_set_zz();
}

// Editor: zz getter
double HomTransform::Editor::get_zz() const
{
    return obj->zz;
}

// Editor: zz will_set
bool HomTransform::Editor::will_set_zz()
{
    return true;
}

// Editor: zz did_set
bool HomTransform::Editor::did_set_zz()
{
    return true;
}

// Editor: clean
void HomTransform::Editor::clean()
{
    dirty_flags(false);
}

// Editor: read
bool HomTransform::Editor::read(yarp::os::ConnectionReader& connection)
{
    if (!isValid()) {
        return false;
    }
    yarp::os::idl::WireReader reader(connection);
    reader.expectAccept();
    if (!reader.readListHeader()) {
        return false;
    }
    int len = reader.getLength();
    if (len == 0) {
        yarp::os::idl::WireWriter writer(reader);
        if (writer.isNull()) {
            return true;
        }
        if (!writer.writeListHeader(1)) {
            return false;
        }
        writer.writeString("send: 'help' or 'patch (param1 val1) (param2 val2)'");
        return true;
    }
    std::string tag;
    if (!reader.readString(tag)) {
        return false;
    }
    if (tag == "help") {
        yarp::os::idl::WireWriter writer(reader);
        if (writer.isNull()) {
            return true;
        }
        if (!writer.writeListHeader(2)) {
            return false;
        }
        if (!writer.writeTag("many", 1, 0)) {
            return false;
        }
        if (reader.getLength() > 0) {
            std::string field;
            if (!reader.readString(field)) {
                return false;
            }
            if (field == "x") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double x")) {
                    return false;
                }
            }
            if (field == "y") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double y")) {
                    return false;
                }
            }
            if (field == "z") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double z")) {
                    return false;
                }
            }
            if (field == "xx") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double xx")) {
                    return false;
                }
            }
            if (field == "xy") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double xy")) {
                    return false;
                }
            }
            if (field == "xz") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double xz")) {
                    return false;
                }
            }
            if (field == "yx") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double yx")) {
                    return false;
                }
            }
            if (field == "yy") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double yy")) {
                    return false;
                }
            }
            if (field == "yz") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double yz")) {
                    return false;
                }
            }
            if (field == "zx") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double zx")) {
                    return false;
                }
            }
            if (field == "zy") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double zy")) {
                    return false;
                }
            }
            if (field == "zz") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("double zz")) {
                    return false;
                }
            }
        }
        if (!writer.writeListHeader(13)) {
            return false;
        }
        writer.writeString("*** Available fields:");
        writer.writeString("x");
        writer.writeString("y");
        writer.writeString("z");
        writer.writeString("xx");
        writer.writeString("xy");
        writer.writeString("xz");
        writer.writeString("yx");
        writer.writeString("yy");
        writer.writeString("yz");
        writer.writeString("zx");
        writer.writeString("zy");
        writer.writeString("zz");
        return true;
    }
    bool nested = true;
    bool have_act = false;
    if (tag != "patch") {
        if (((len - 1) % 2) != 0) {
            return false;
        }
        len = 1 + ((len - 1) / 2);
        nested = false;
        have_act = true;
    }
    for (int i = 1; i < len; ++i) {
        if (nested && !reader.readListHeader(3)) {
            return false;
        }
        std::string act;
        std::string key;
        if (have_act) {
            act = tag;
        } else if (!reader.readString(act)) {
            return false;
        }
        if (!reader.readString(key)) {
            return false;
        }
        if (key == "x") {
            will_set_x();
            if (!obj->nested_read_x(reader)) {
                return false;
            }
            did_set_x();
        } else if (key == "y") {
            will_set_y();
            if (!obj->nested_read_y(reader)) {
                return false;
            }
            did_set_y();
        } else if (key == "z") {
            will_set_z();
            if (!obj->nested_read_z(reader)) {
                return false;
            }
            did_set_z();
        } else if (key == "xx") {
            will_set_xx();
            if (!obj->nested_read_xx(reader)) {
                return false;
            }
            did_set_xx();
        } else if (key == "xy") {
            will_set_xy();
            if (!obj->nested_read_xy(reader)) {
                return false;
            }
            did_set_xy();
        } else if (key == "xz") {
            will_set_xz();
            if (!obj->nested_read_xz(reader)) {
                return false;
            }
            did_set_xz();
        } else if (key == "yx") {
            will_set_yx();
            if (!obj->nested_read_yx(reader)) {
                return false;
            }
            did_set_yx();
        } else if (key == "yy") {
            will_set_yy();
            if (!obj->nested_read_yy(reader)) {
                return false;
            }
            did_set_yy();
        } else if (key == "yz") {
            will_set_yz();
            if (!obj->nested_read_yz(reader)) {
                return false;
            }
            did_set_yz();
        } else if (key == "zx") {
            will_set_zx();
            if (!obj->nested_read_zx(reader)) {
                return false;
            }
            did_set_zx();
        } else if (key == "zy") {
            will_set_zy();
            if (!obj->nested_read_zy(reader)) {
                return false;
            }
            did_set_zy();
        } else if (key == "zz") {
            will_set_zz();
            if (!obj->nested_read_zz(reader)) {
                return false;
            }
            did_set_zz();
        } else {
            // would be useful to have a fallback here
        }
    }
    reader.accept();
    yarp::os::idl::WireWriter writer(reader);
    if (writer.isNull()) {
        return true;
    }
    writer.writeListHeader(1);
    writer.writeVocab(yarp::os::createVocab('o', 'k'));
    return true;
}

// Editor: write
bool HomTransform::Editor::write(yarp::os::ConnectionWriter& connection) const
{
    if (!isValid()) {
        return false;
    }
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(dirty_count + 1)) {
        return false;
    }
    if (!writer.writeString("patch")) {
        return false;
    }
    if (is_dirty_x) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("x")) {
            return false;
        }
        if (!obj->nested_write_x(writer)) {
            return false;
        }
    }
    if (is_dirty_y) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("y")) {
            return false;
        }
        if (!obj->nested_write_y(writer)) {
            return false;
        }
    }
    if (is_dirty_z) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("z")) {
            return false;
        }
        if (!obj->nested_write_z(writer)) {
            return false;
        }
    }
    if (is_dirty_xx) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("xx")) {
            return false;
        }
        if (!obj->nested_write_xx(writer)) {
            return false;
        }
    }
    if (is_dirty_xy) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("xy")) {
            return false;
        }
        if (!obj->nested_write_xy(writer)) {
            return false;
        }
    }
    if (is_dirty_xz) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("xz")) {
            return false;
        }
        if (!obj->nested_write_xz(writer)) {
            return false;
        }
    }
    if (is_dirty_yx) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("yx")) {
            return false;
        }
        if (!obj->nested_write_yx(writer)) {
            return false;
        }
    }
    if (is_dirty_yy) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("yy")) {
            return false;
        }
        if (!obj->nested_write_yy(writer)) {
            return false;
        }
    }
    if (is_dirty_yz) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("yz")) {
            return false;
        }
        if (!obj->nested_write_yz(writer)) {
            return false;
        }
    }
    if (is_dirty_zx) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("zx")) {
            return false;
        }
        if (!obj->nested_write_zx(writer)) {
            return false;
        }
    }
    if (is_dirty_zy) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("zy")) {
            return false;
        }
        if (!obj->nested_write_zy(writer)) {
            return false;
        }
    }
    if (is_dirty_zz) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("zz")) {
            return false;
        }
        if (!obj->nested_write_zz(writer)) {
            return false;
        }
    }
    return !writer.isError();
}

// Editor: send if possible
void HomTransform::Editor::communicate()
{
    if (group != 0) {
        return;
    }
    if (yarp().canWrite()) {
        yarp().write(*this);
        clean();
    }
}

// Editor: mark dirty overall
void HomTransform::Editor::mark_dirty()
{
    is_dirty = true;
}

// Editor: x mark_dirty
void HomTransform::Editor::mark_dirty_x()
{
    if (is_dirty_x) {
        return;
    }
    dirty_count++;
    is_dirty_x = true;
    mark_dirty();
}

// Editor: y mark_dirty
void HomTransform::Editor::mark_dirty_y()
{
    if (is_dirty_y) {
        return;
    }
    dirty_count++;
    is_dirty_y = true;
    mark_dirty();
}

// Editor: z mark_dirty
void HomTransform::Editor::mark_dirty_z()
{
    if (is_dirty_z) {
        return;
    }
    dirty_count++;
    is_dirty_z = true;
    mark_dirty();
}

// Editor: xx mark_dirty
void HomTransform::Editor::mark_dirty_xx()
{
    if (is_dirty_xx) {
        return;
    }
    dirty_count++;
    is_dirty_xx = true;
    mark_dirty();
}

// Editor: xy mark_dirty
void HomTransform::Editor::mark_dirty_xy()
{
    if (is_dirty_xy) {
        return;
    }
    dirty_count++;
    is_dirty_xy = true;
    mark_dirty();
}

// Editor: xz mark_dirty
void HomTransform::Editor::mark_dirty_xz()
{
    if (is_dirty_xz) {
        return;
    }
    dirty_count++;
    is_dirty_xz = true;
    mark_dirty();
}

// Editor: yx mark_dirty
void HomTransform::Editor::mark_dirty_yx()
{
    if (is_dirty_yx) {
        return;
    }
    dirty_count++;
    is_dirty_yx = true;
    mark_dirty();
}

// Editor: yy mark_dirty
void HomTransform::Editor::mark_dirty_yy()
{
    if (is_dirty_yy) {
        return;
    }
    dirty_count++;
    is_dirty_yy = true;
    mark_dirty();
}

// Editor: yz mark_dirty
void HomTransform::Editor::mark_dirty_yz()
{
    if (is_dirty_yz) {
        return;
    }
    dirty_count++;
    is_dirty_yz = true;
    mark_dirty();
}

// Editor: zx mark_dirty
void HomTransform::Editor::mark_dirty_zx()
{
    if (is_dirty_zx) {
        return;
    }
    dirty_count++;
    is_dirty_zx = true;
    mark_dirty();
}

// Editor: zy mark_dirty
void HomTransform::Editor::mark_dirty_zy()
{
    if (is_dirty_zy) {
        return;
    }
    dirty_count++;
    is_dirty_zy = true;
    mark_dirty();
}

// Editor: zz mark_dirty
void HomTransform::Editor::mark_dirty_zz()
{
    if (is_dirty_zz) {
        return;
    }
    dirty_count++;
    is_dirty_zz = true;
    mark_dirty();
}

// Editor: dirty_flags
void HomTransform::Editor::dirty_flags(bool flag)
{
    is_dirty = flag;
    is_dirty_x = flag;
    is_dirty_y = flag;
    is_dirty_z = flag;
    is_dirty_xx = flag;
    is_dirty_xy = flag;
    is_dirty_xz = flag;
    is_dirty_yx = flag;
    is_dirty_yy = flag;
    is_dirty_yz = flag;
    is_dirty_zx = flag;
    is_dirty_zy = flag;
    is_dirty_zz = flag;
    dirty_count = flag ? 12 : 0;
}

// read x field
bool HomTransform::read_x(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(x)) {
        reader.fail();
        return false;
    }
    return true;
}

// write x field
bool HomTransform::write_x(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(x)) {
        return false;
    }
    return true;
}

// read (nested) x field
bool HomTransform::nested_read_x(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(x)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) x field
bool HomTransform::nested_write_x(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(x)) {
        return false;
    }
    return true;
}

// read y field
bool HomTransform::read_y(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(y)) {
        reader.fail();
        return false;
    }
    return true;
}

// write y field
bool HomTransform::write_y(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(y)) {
        return false;
    }
    return true;
}

// read (nested) y field
bool HomTransform::nested_read_y(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(y)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) y field
bool HomTransform::nested_write_y(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(y)) {
        return false;
    }
    return true;
}

// read z field
bool HomTransform::read_z(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(z)) {
        reader.fail();
        return false;
    }
    return true;
}

// write z field
bool HomTransform::write_z(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(z)) {
        return false;
    }
    return true;
}

// read (nested) z field
bool HomTransform::nested_read_z(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(z)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) z field
bool HomTransform::nested_write_z(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(z)) {
        return false;
    }
    return true;
}

// read xx field
bool HomTransform::read_xx(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(xx)) {
        reader.fail();
        return false;
    }
    return true;
}

// write xx field
bool HomTransform::write_xx(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(xx)) {
        return false;
    }
    return true;
}

// read (nested) xx field
bool HomTransform::nested_read_xx(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(xx)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) xx field
bool HomTransform::nested_write_xx(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(xx)) {
        return false;
    }
    return true;
}

// read xy field
bool HomTransform::read_xy(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(xy)) {
        reader.fail();
        return false;
    }
    return true;
}

// write xy field
bool HomTransform::write_xy(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(xy)) {
        return false;
    }
    return true;
}

// read (nested) xy field
bool HomTransform::nested_read_xy(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(xy)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) xy field
bool HomTransform::nested_write_xy(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(xy)) {
        return false;
    }
    return true;
}

// read xz field
bool HomTransform::read_xz(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(xz)) {
        reader.fail();
        return false;
    }
    return true;
}

// write xz field
bool HomTransform::write_xz(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(xz)) {
        return false;
    }
    return true;
}

// read (nested) xz field
bool HomTransform::nested_read_xz(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(xz)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) xz field
bool HomTransform::nested_write_xz(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(xz)) {
        return false;
    }
    return true;
}

// read yx field
bool HomTransform::read_yx(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(yx)) {
        reader.fail();
        return false;
    }
    return true;
}

// write yx field
bool HomTransform::write_yx(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(yx)) {
        return false;
    }
    return true;
}

// read (nested) yx field
bool HomTransform::nested_read_yx(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(yx)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) yx field
bool HomTransform::nested_write_yx(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(yx)) {
        return false;
    }
    return true;
}

// read yy field
bool HomTransform::read_yy(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(yy)) {
        reader.fail();
        return false;
    }
    return true;
}

// write yy field
bool HomTransform::write_yy(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(yy)) {
        return false;
    }
    return true;
}

// read (nested) yy field
bool HomTransform::nested_read_yy(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(yy)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) yy field
bool HomTransform::nested_write_yy(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(yy)) {
        return false;
    }
    return true;
}

// read yz field
bool HomTransform::read_yz(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(yz)) {
        reader.fail();
        return false;
    }
    return true;
}

// write yz field
bool HomTransform::write_yz(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(yz)) {
        return false;
    }
    return true;
}

// read (nested) yz field
bool HomTransform::nested_read_yz(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(yz)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) yz field
bool HomTransform::nested_write_yz(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(yz)) {
        return false;
    }
    return true;
}

// read zx field
bool HomTransform::read_zx(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(zx)) {
        reader.fail();
        return false;
    }
    return true;
}

// write zx field
bool HomTransform::write_zx(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(zx)) {
        return false;
    }
    return true;
}

// read (nested) zx field
bool HomTransform::nested_read_zx(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(zx)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) zx field
bool HomTransform::nested_write_zx(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(zx)) {
        return false;
    }
    return true;
}

// read zy field
bool HomTransform::read_zy(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(zy)) {
        reader.fail();
        return false;
    }
    return true;
}

// write zy field
bool HomTransform::write_zy(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(zy)) {
        return false;
    }
    return true;
}

// read (nested) zy field
bool HomTransform::nested_read_zy(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(zy)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) zy field
bool HomTransform::nested_write_zy(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(zy)) {
        return false;
    }
    return true;
}

// read zz field
bool HomTransform::read_zz(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(zz)) {
        reader.fail();
        return false;
    }
    return true;
}

// write zz field
bool HomTransform::write_zz(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(zz)) {
        return false;
    }
    return true;
}

// read (nested) zz field
bool HomTransform::nested_read_zz(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(zz)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) zz field
bool HomTransform::nested_write_zz(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(zz)) {
        return false;
    }
    return true;
}

} // namespace codyco

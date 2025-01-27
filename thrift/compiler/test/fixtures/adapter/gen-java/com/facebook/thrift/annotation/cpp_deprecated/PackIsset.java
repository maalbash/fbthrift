/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package com.facebook.thrift.annotation.cpp_deprecated;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class PackIsset implements TBase, java.io.Serializable, Cloneable, Comparable<PackIsset> {
  private static final TStruct STRUCT_DESC = new TStruct("PackIsset");
  private static final TField ATOMIC_FIELD_DESC = new TField("atomic", TType.BOOL, (short)1);

  public boolean atomic;
  public static final int ATOMIC = 1;

  // isset id assignments
  private static final int __ATOMIC_ISSET_ID = 0;
  private BitSet __isset_bit_vector = new BitSet(1);

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(ATOMIC, new FieldMetaData("atomic", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.BOOL)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(PackIsset.class, metaDataMap);
  }

  public PackIsset() {
    this.atomic = false;

  }

  public PackIsset(
      boolean atomic) {
    this();
    this.atomic = atomic;
    setAtomicIsSet(true);
  }

  public static class Builder {
    private boolean atomic;

    BitSet __optional_isset = new BitSet(1);

    public Builder() {
    }

    public Builder setAtomic(final boolean atomic) {
      this.atomic = atomic;
      __optional_isset.set(__ATOMIC_ISSET_ID, true);
      return this;
    }

    public PackIsset build() {
      PackIsset result = new PackIsset();
      if (__optional_isset.get(__ATOMIC_ISSET_ID)) {
        result.setAtomic(this.atomic);
      }
      return result;
    }
  }

  public static Builder builder() {
    return new Builder();
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public PackIsset(PackIsset other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    this.atomic = TBaseHelper.deepCopy(other.atomic);
  }

  public PackIsset deepCopy() {
    return new PackIsset(this);
  }

  public boolean isAtomic() {
    return this.atomic;
  }

  public PackIsset setAtomic(boolean atomic) {
    this.atomic = atomic;
    setAtomicIsSet(true);
    return this;
  }

  public void unsetAtomic() {
    __isset_bit_vector.clear(__ATOMIC_ISSET_ID);
  }

  // Returns true if field atomic is set (has been assigned a value) and false otherwise
  public boolean isSetAtomic() {
    return __isset_bit_vector.get(__ATOMIC_ISSET_ID);
  }

  public void setAtomicIsSet(boolean __value) {
    __isset_bit_vector.set(__ATOMIC_ISSET_ID, __value);
  }

  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case ATOMIC:
      if (__value == null) {
        unsetAtomic();
      } else {
        setAtomic((Boolean)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case ATOMIC:
      return new Boolean(isAtomic());

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof PackIsset))
      return false;
    PackIsset that = (PackIsset)_that;

    if (!TBaseHelper.equalsNobinary(this.atomic, that.atomic)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {atomic});
  }

  @Override
  public int compareTo(PackIsset other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetAtomic()).compareTo(other.isSetAtomic());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(atomic, other.atomic);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case ATOMIC:
          if (__field.type == TType.BOOL) {
            this.atomic = iprot.readBool();
            setAtomicIsSet(true);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    oprot.writeFieldBegin(ATOMIC_FIELD_DESC);
    oprot.writeBool(this.atomic);
    oprot.writeFieldEnd();
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("PackIsset");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("atomic");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.isAtomic(), indent + 1, prettyPrint));
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}


/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
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
public class CompatibleWithKeywordSink implements TBase, java.io.Serializable, Cloneable, Comparable<CompatibleWithKeywordSink> {
  private static final TStruct STRUCT_DESC = new TStruct("CompatibleWithKeywordSink");
  private static final TField SINK_FIELD_DESC = new TField("sink", TType.STRING, (short)1);

  public String sink;
  public static final int SINK = 1;

  // isset id assignments

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(SINK, new FieldMetaData("sink", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.STRING)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(CompatibleWithKeywordSink.class, metaDataMap);
  }

  public CompatibleWithKeywordSink() {
  }

  public CompatibleWithKeywordSink(
      String sink) {
    this();
    this.sink = sink;
  }

  public static class Builder {
    private String sink;

    public Builder() {
    }

    public Builder setSink(final String sink) {
      this.sink = sink;
      return this;
    }

    public CompatibleWithKeywordSink build() {
      CompatibleWithKeywordSink result = new CompatibleWithKeywordSink();
      result.setSink(this.sink);
      return result;
    }
  }

  public static Builder builder() {
    return new Builder();
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public CompatibleWithKeywordSink(CompatibleWithKeywordSink other) {
    if (other.isSetSink()) {
      this.sink = TBaseHelper.deepCopy(other.sink);
    }
  }

  public CompatibleWithKeywordSink deepCopy() {
    return new CompatibleWithKeywordSink(this);
  }

  public String getSink() {
    return this.sink;
  }

  public CompatibleWithKeywordSink setSink(String sink) {
    this.sink = sink;
    return this;
  }

  public void unsetSink() {
    this.sink = null;
  }

  // Returns true if field sink is set (has been assigned a value) and false otherwise
  public boolean isSetSink() {
    return this.sink != null;
  }

  public void setSinkIsSet(boolean __value) {
    if (!__value) {
      this.sink = null;
    }
  }

  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case SINK:
      if (__value == null) {
        unsetSink();
      } else {
        setSink((String)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case SINK:
      return getSink();

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
    if (!(_that instanceof CompatibleWithKeywordSink))
      return false;
    CompatibleWithKeywordSink that = (CompatibleWithKeywordSink)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetSink(), that.isSetSink(), this.sink, that.sink)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {sink});
  }

  @Override
  public int compareTo(CompatibleWithKeywordSink other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetSink()).compareTo(other.isSetSink());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(sink, other.sink);
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
        case SINK:
          if (__field.type == TType.STRING) {
            this.sink = iprot.readString();
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
    if (this.sink != null) {
      oprot.writeFieldBegin(SINK_FIELD_DESC);
      oprot.writeString(this.sink);
      oprot.writeFieldEnd();
    }
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
    StringBuilder sb = new StringBuilder("CompatibleWithKeywordSink");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("sink");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getSink() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getSink(), indent + 1, prettyPrint));
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}


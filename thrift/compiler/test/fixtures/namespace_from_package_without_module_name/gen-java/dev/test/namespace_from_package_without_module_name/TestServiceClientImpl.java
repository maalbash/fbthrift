/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package dev.test.namespace_from_package_without_module_name;

import com.facebook.nifty.client.RequestChannel;
import com.facebook.swift.codec.*;
import com.facebook.swift.service.*;
import com.facebook.swift.service.metadata.*;
import com.facebook.thrift.client.*;
import com.facebook.thrift.util.FutureUtil;
import java.io.*;
import java.lang.reflect.Method;
import java.util.*;
import org.apache.thrift.ProtocolId;
import reactor.core.publisher.Mono;

@SwiftGenerated
@Deprecated
public class TestServiceClientImpl extends AbstractThriftClient implements TestService {

    // Method Handlers
    private ThriftMethodHandler initMethodHandler;

    // Method Exceptions
    private static final Class[] initExceptions = new Class[] {
        org.apache.thrift.TException.class};

    public TestServiceClientImpl(
        RequestChannel channel,
        Map<Method, ThriftMethodHandler> methods,
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        List<? extends ThriftClientEventHandler> eventHandlers) {
      super(channel, headers, persistentHeaders, eventHandlers);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      initMethodHandler = methodHandlerMap.get("init");
    }

    public TestServiceClientImpl(
        Map<String, String> headers,
        Map<String, String> persistentHeaders,
        Mono<? extends RpcClient> rpcClient,
        ThriftServiceMetadata serviceMetadata,
        ThriftCodecManager codecManager,
        ProtocolId protocolId,
        Map<Method, ThriftMethodHandler> methods) {
      super(headers, persistentHeaders, rpcClient, serviceMetadata, codecManager, protocolId);

      Map<String, ThriftMethodHandler> methodHandlerMap = new HashMap<>();
      methods.forEach(
          (key, value) -> {
            methodHandlerMap.put(key.getName(), value);
          });

      // Set method handlers
      initMethodHandler = methodHandlerMap.get("init");
    }

    @java.lang.Override
    public void close() {
        super.close();
    }


    @java.lang.Override
    public long init(
        long int1) throws org.apache.thrift.TException {
      return initWrapper(int1, RpcOptions.EMPTY).getData();
    }

    @java.lang.Override
    public long init(
        long int1,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      return initWrapper(int1, rpcOptions).getData();
    }

    @java.lang.Override
    public ResponseWrapper<Long> initWrapper(
        long int1,
        RpcOptions rpcOptions) throws org.apache.thrift.TException {
      try {
        return FutureUtil.get(executeWrapperWithOptions(initMethodHandler, initExceptions, rpcOptions, int1));
      } catch (Throwable t) {
        if (t instanceof org.apache.thrift.TException) {
          throw (org.apache.thrift.TException) t;
        }
        throw new org.apache.thrift.TException(t);
      }
    }
}
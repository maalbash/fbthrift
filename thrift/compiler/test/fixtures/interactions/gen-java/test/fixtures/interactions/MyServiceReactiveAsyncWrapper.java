/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.interactions;

import java.util.*;

public class MyServiceReactiveAsyncWrapper 
  implements MyService.Async {
  private MyService.Reactive _delegate;

  public MyServiceReactiveAsyncWrapper(MyService.Reactive _delegate) {
    
    this._delegate = _delegate;
  }

  public MyServiceReactiveAsyncWrapper(org.apache.thrift.ProtocolId _protocolId, reactor.core.publisher.Mono<? extends com.facebook.thrift.client.RpcClient> _rpcClient, Map<String, String> _headers, Map<String, String> _persistentHeaders) {
    this(new MyServiceReactiveClient(_protocolId, _rpcClient, _headers, _persistentHeaders));
  }

  @java.lang.Override
  public void close() {
    _delegate.dispose();
  }

  @java.lang.Override
  public com.google.common.util.concurrent.ListenableFuture<Void> foo() {
      return com.facebook.thrift.util.FutureUtil.toListenableFuture(_delegate.foo());
  }

  @java.lang.Override
  public com.google.common.util.concurrent.ListenableFuture<Void> foo(
    com.facebook.thrift.client.RpcOptions rpcOptions) {
      return com.facebook.thrift.util.FutureUtil.toListenableFuture(_delegate.foo( rpcOptions));
  }

  @java.lang.Override
  public com.google.common.util.concurrent.ListenableFuture<com.facebook.thrift.client.ResponseWrapper<Void>> fooWrapper(
    com.facebook.thrift.client.RpcOptions rpcOptions) {
    return com.facebook.thrift.util.FutureUtil.toListenableFuture(_delegate.fooWrapper( rpcOptions));
  }

  public class MyInteractionImpl implements MyInteraction {
    @java.lang.Override
    public com.google.common.util.concurrent.ListenableFuture<Integer> frobnicate() {
        throw new UnsupportedOperationException("Interactions are not yet supported on ReactiveAsyncWrapper Interfaces!");
    }

    @java.lang.Override
    public com.google.common.util.concurrent.ListenableFuture<Integer> frobnicate(
      com.facebook.thrift.client.RpcOptions rpcOptions) {
        throw new UnsupportedOperationException("Interactions are not yet supported on ReactiveAsyncWrapper Interfaces!");
    }

    @java.lang.Override
    public com.google.common.util.concurrent.ListenableFuture<com.facebook.thrift.client.ResponseWrapper<Integer>> frobnicateWrapper(
      com.facebook.thrift.client.RpcOptions rpcOptions) {
      throw new UnsupportedOperationException("Interactions are not yet supported on ReactiveAsyncWrapper Interfaces!");
    }

    @java.lang.Override
    public com.google.common.util.concurrent.ListenableFuture<Void> ping() {
        throw new UnsupportedOperationException("Interactions are not yet supported on ReactiveAsyncWrapper Interfaces!");
    }

    @java.lang.Override
    public com.google.common.util.concurrent.ListenableFuture<Void> ping(
      com.facebook.thrift.client.RpcOptions rpcOptions) {
        throw new UnsupportedOperationException("Interactions are not yet supported on ReactiveAsyncWrapper Interfaces!");
    }

    @java.lang.Override
    public com.google.common.util.concurrent.ListenableFuture<com.facebook.thrift.client.ResponseWrapper<Void>> pingWrapper(
      com.facebook.thrift.client.RpcOptions rpcOptions) {
      throw new UnsupportedOperationException("Interactions are not yet supported on ReactiveAsyncWrapper Interfaces!");
    }

    @java.lang.Override
    public void close() {}
  }

  public MyInteraction createMyInteraction() {
      return new MyInteractionImpl();
  }

  public class MyInteractionFastImpl implements MyInteractionFast {
    @java.lang.Override
    public com.google.common.util.concurrent.ListenableFuture<Integer> frobnicate() {
        throw new UnsupportedOperationException("Interactions are not yet supported on ReactiveAsyncWrapper Interfaces!");
    }

    @java.lang.Override
    public com.google.common.util.concurrent.ListenableFuture<Integer> frobnicate(
      com.facebook.thrift.client.RpcOptions rpcOptions) {
        throw new UnsupportedOperationException("Interactions are not yet supported on ReactiveAsyncWrapper Interfaces!");
    }

    @java.lang.Override
    public com.google.common.util.concurrent.ListenableFuture<com.facebook.thrift.client.ResponseWrapper<Integer>> frobnicateWrapper(
      com.facebook.thrift.client.RpcOptions rpcOptions) {
      throw new UnsupportedOperationException("Interactions are not yet supported on ReactiveAsyncWrapper Interfaces!");
    }

    @java.lang.Override
    public com.google.common.util.concurrent.ListenableFuture<Void> ping() {
        throw new UnsupportedOperationException("Interactions are not yet supported on ReactiveAsyncWrapper Interfaces!");
    }

    @java.lang.Override
    public com.google.common.util.concurrent.ListenableFuture<Void> ping(
      com.facebook.thrift.client.RpcOptions rpcOptions) {
        throw new UnsupportedOperationException("Interactions are not yet supported on ReactiveAsyncWrapper Interfaces!");
    }

    @java.lang.Override
    public com.google.common.util.concurrent.ListenableFuture<com.facebook.thrift.client.ResponseWrapper<Void>> pingWrapper(
      com.facebook.thrift.client.RpcOptions rpcOptions) {
      throw new UnsupportedOperationException("Interactions are not yet supported on ReactiveAsyncWrapper Interfaces!");
    }

    @java.lang.Override
    public void close() {}
  }

  public MyInteractionFast createMyInteractionFast() {
      return new MyInteractionFastImpl();
  }

  public class SerialInteractionImpl implements SerialInteraction {
    @java.lang.Override
    public com.google.common.util.concurrent.ListenableFuture<Void> frobnicate() {
        throw new UnsupportedOperationException("Interactions are not yet supported on ReactiveAsyncWrapper Interfaces!");
    }

    @java.lang.Override
    public com.google.common.util.concurrent.ListenableFuture<Void> frobnicate(
      com.facebook.thrift.client.RpcOptions rpcOptions) {
        throw new UnsupportedOperationException("Interactions are not yet supported on ReactiveAsyncWrapper Interfaces!");
    }

    @java.lang.Override
    public com.google.common.util.concurrent.ListenableFuture<com.facebook.thrift.client.ResponseWrapper<Void>> frobnicateWrapper(
      com.facebook.thrift.client.RpcOptions rpcOptions) {
      throw new UnsupportedOperationException("Interactions are not yet supported on ReactiveAsyncWrapper Interfaces!");
    }

    @java.lang.Override
    public void close() {}
  }

  public SerialInteraction createSerialInteraction() {
      return new SerialInteractionImpl();
  }
}
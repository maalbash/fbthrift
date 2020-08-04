/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/stream/gen-cpp2/module_types.h"
#include <thrift/lib/cpp2/async/ClientBufferedStream.h>

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {

class PubSubStreamingServiceAsyncClient : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "PubSubStreamingService";
  }

  virtual void returnstream(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32_from, int32_t i32_to);
  virtual void returnstream(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32_from, int32_t i32_to);
 protected:
  void returnstreamImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback, int32_t i32_from, int32_t i32_to);
 public:
  virtual apache::thrift::ClientBufferedStream<int32_t> sync_returnstream(int32_t i32_from, int32_t i32_to);
  virtual apache::thrift::ClientBufferedStream<int32_t> sync_returnstream(apache::thrift::RpcOptions& rpcOptions, int32_t i32_from, int32_t i32_to);
  virtual folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> semifuture_returnstream(int32_t i32_from, int32_t i32_to);
  virtual folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> semifuture_returnstream(apache::thrift::RpcOptions& rpcOptions, int32_t i32_from, int32_t i32_to);
private:
  folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> semifuture_impl_returnstream(apache::thrift::RpcOptions& rpcOptions, int32_t i32_from, int32_t i32_to);
public:
  virtual folly::SemiFuture<std::pair<apache::thrift::ClientBufferedStream<int32_t>, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_returnstream(apache::thrift::RpcOptions& rpcOptions, int32_t i32_from, int32_t i32_to);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<apache::thrift::ClientBufferedStream<int32_t>> co_returnstream(int32_t i32_from, int32_t i32_to) {
    ::apache::thrift::RpcOptions rpcOptions;
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_return co_await folly::coro::detachOnCancel(semifuture_impl_returnstream(rpcOptions, i32_from, i32_to));
    } else {
      co_return co_await semifuture_impl_returnstream(rpcOptions, i32_from, i32_to);
    }
  }
  template <int = 0>
  folly::coro::Task<apache::thrift::ClientBufferedStream<int32_t>> co_returnstream(apache::thrift::RpcOptions& rpcOptions, int32_t i32_from, int32_t i32_to) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_return co_await folly::coro::detachOnCancel(semifuture_impl_returnstream(rpcOptions, i32_from, i32_to));
    } else {
      co_return co_await semifuture_impl_returnstream(rpcOptions, i32_from, i32_to);
    }
  }
#endif // FOLLY_HAS_COROUTINES
  static folly::exception_wrapper recv_wrapped_returnstream(apache::thrift::ClientBufferedStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ClientBufferedStream<int32_t> recv_returnstream(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::ClientBufferedStream<int32_t> recv_instance_returnstream(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_returnstream(apache::thrift::ClientBufferedStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void returnstreamT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback, int32_t i32_from, int32_t i32_to);
 public:
  virtual void streamthrows(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
  virtual void streamthrows(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
 protected:
  void streamthrowsImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback, int32_t foo);
 public:
  virtual apache::thrift::ClientBufferedStream<int32_t> sync_streamthrows(int32_t foo);
  virtual apache::thrift::ClientBufferedStream<int32_t> sync_streamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> semifuture_streamthrows(int32_t foo);
  virtual folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> semifuture_streamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
private:
  folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> semifuture_impl_streamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
public:
  virtual folly::SemiFuture<std::pair<apache::thrift::ClientBufferedStream<int32_t>, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_streamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<apache::thrift::ClientBufferedStream<int32_t>> co_streamthrows(int32_t foo) {
    ::apache::thrift::RpcOptions rpcOptions;
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_return co_await folly::coro::detachOnCancel(semifuture_impl_streamthrows(rpcOptions, foo));
    } else {
      co_return co_await semifuture_impl_streamthrows(rpcOptions, foo);
    }
  }
  template <int = 0>
  folly::coro::Task<apache::thrift::ClientBufferedStream<int32_t>> co_streamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_return co_await folly::coro::detachOnCancel(semifuture_impl_streamthrows(rpcOptions, foo));
    } else {
      co_return co_await semifuture_impl_streamthrows(rpcOptions, foo);
    }
  }
#endif // FOLLY_HAS_COROUTINES
  static folly::exception_wrapper recv_wrapped_streamthrows(apache::thrift::ClientBufferedStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ClientBufferedStream<int32_t> recv_streamthrows(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::ClientBufferedStream<int32_t> recv_instance_streamthrows(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_streamthrows(apache::thrift::ClientBufferedStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void streamthrowsT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback, int32_t foo);
 public:
  virtual void boththrows(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
  virtual void boththrows(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
 protected:
  void boththrowsImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback, int32_t foo);
 public:
  virtual apache::thrift::ClientBufferedStream<int32_t> sync_boththrows(int32_t foo);
  virtual apache::thrift::ClientBufferedStream<int32_t> sync_boththrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> semifuture_boththrows(int32_t foo);
  virtual folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> semifuture_boththrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
private:
  folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> semifuture_impl_boththrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
public:
  virtual folly::SemiFuture<std::pair<apache::thrift::ClientBufferedStream<int32_t>, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_boththrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<apache::thrift::ClientBufferedStream<int32_t>> co_boththrows(int32_t foo) {
    ::apache::thrift::RpcOptions rpcOptions;
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_return co_await folly::coro::detachOnCancel(semifuture_impl_boththrows(rpcOptions, foo));
    } else {
      co_return co_await semifuture_impl_boththrows(rpcOptions, foo);
    }
  }
  template <int = 0>
  folly::coro::Task<apache::thrift::ClientBufferedStream<int32_t>> co_boththrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_return co_await folly::coro::detachOnCancel(semifuture_impl_boththrows(rpcOptions, foo));
    } else {
      co_return co_await semifuture_impl_boththrows(rpcOptions, foo);
    }
  }
#endif // FOLLY_HAS_COROUTINES
  static folly::exception_wrapper recv_wrapped_boththrows(apache::thrift::ClientBufferedStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ClientBufferedStream<int32_t> recv_boththrows(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::ClientBufferedStream<int32_t> recv_instance_boththrows(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_boththrows(apache::thrift::ClientBufferedStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void boththrowsT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback, int32_t foo);
 public:
  virtual void responseandstreamthrows(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
  virtual void responseandstreamthrows(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo);
 protected:
  void responseandstreamthrowsImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback, int32_t foo);
 public:
  virtual apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t> sync_responseandstreamthrows(int32_t foo);
  virtual apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t> sync_responseandstreamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
  virtual folly::SemiFuture<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>> semifuture_responseandstreamthrows(int32_t foo);
  virtual folly::SemiFuture<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>> semifuture_responseandstreamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
private:
  folly::SemiFuture<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>> semifuture_impl_responseandstreamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);
public:
  virtual folly::SemiFuture<std::pair<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_responseandstreamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>> co_responseandstreamthrows(int32_t foo) {
    ::apache::thrift::RpcOptions rpcOptions;
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_return co_await folly::coro::detachOnCancel(semifuture_impl_responseandstreamthrows(rpcOptions, foo));
    } else {
      co_return co_await semifuture_impl_responseandstreamthrows(rpcOptions, foo);
    }
  }
  template <int = 0>
  folly::coro::Task<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>> co_responseandstreamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_return co_await folly::coro::detachOnCancel(semifuture_impl_responseandstreamthrows(rpcOptions, foo));
    } else {
      co_return co_await semifuture_impl_responseandstreamthrows(rpcOptions, foo);
    }
  }
#endif // FOLLY_HAS_COROUTINES
  static folly::exception_wrapper recv_wrapped_responseandstreamthrows(apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t> recv_responseandstreamthrows(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t> recv_instance_responseandstreamthrows(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_responseandstreamthrows(apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void responseandstreamthrowsT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback, int32_t foo);
 public:
};

} // cpp2

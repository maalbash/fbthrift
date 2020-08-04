/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/types/gen-cpp2/include_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace apache { namespace thrift { namespace fixtures { namespace types {

class SomeServiceAsyncClient : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "SomeService";
  }

  virtual void bounce_map(std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::apache::thrift::fixtures::types::SomeMap& m);
  virtual void bounce_map(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::apache::thrift::fixtures::types::SomeMap& m);
 protected:
  void bounce_mapImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const  ::apache::thrift::fixtures::types::SomeMap& m);
 public:
  virtual void sync_bounce_map( ::apache::thrift::fixtures::types::SomeMap& _return, const  ::apache::thrift::fixtures::types::SomeMap& m);
  virtual void sync_bounce_map(apache::thrift::RpcOptions& rpcOptions,  ::apache::thrift::fixtures::types::SomeMap& _return, const  ::apache::thrift::fixtures::types::SomeMap& m);
  virtual folly::Future< ::apache::thrift::fixtures::types::SomeMap> future_bounce_map(const  ::apache::thrift::fixtures::types::SomeMap& m);
  virtual folly::SemiFuture< ::apache::thrift::fixtures::types::SomeMap> semifuture_bounce_map(const  ::apache::thrift::fixtures::types::SomeMap& m);
  virtual folly::Future< ::apache::thrift::fixtures::types::SomeMap> future_bounce_map(apache::thrift::RpcOptions& rpcOptions, const  ::apache::thrift::fixtures::types::SomeMap& m);
  virtual folly::SemiFuture< ::apache::thrift::fixtures::types::SomeMap> semifuture_bounce_map(apache::thrift::RpcOptions& rpcOptions, const  ::apache::thrift::fixtures::types::SomeMap& m);
private:
  folly::SemiFuture< ::apache::thrift::fixtures::types::SomeMap> semifuture_impl_bounce_map(apache::thrift::RpcOptions& rpcOptions, const  ::apache::thrift::fixtures::types::SomeMap& m);
public:
  virtual folly::Future<std::pair< ::apache::thrift::fixtures::types::SomeMap, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_bounce_map(apache::thrift::RpcOptions& rpcOptions, const  ::apache::thrift::fixtures::types::SomeMap& m);
  virtual folly::SemiFuture<std::pair< ::apache::thrift::fixtures::types::SomeMap, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_bounce_map(apache::thrift::RpcOptions& rpcOptions, const  ::apache::thrift::fixtures::types::SomeMap& m);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task< ::apache::thrift::fixtures::types::SomeMap> co_bounce_map(const  ::apache::thrift::fixtures::types::SomeMap& m) {
    ::apache::thrift::RpcOptions rpcOptions;
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_return co_await folly::coro::detachOnCancel(semifuture_impl_bounce_map(rpcOptions, m));
    } else {
      co_return co_await semifuture_impl_bounce_map(rpcOptions, m);
    }
  }
  template <int = 0>
  folly::coro::Task< ::apache::thrift::fixtures::types::SomeMap> co_bounce_map(apache::thrift::RpcOptions& rpcOptions, const  ::apache::thrift::fixtures::types::SomeMap& m) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_return co_await folly::coro::detachOnCancel(semifuture_impl_bounce_map(rpcOptions, m));
    } else {
      co_return co_await semifuture_impl_bounce_map(rpcOptions, m);
    }
  }
#endif // FOLLY_HAS_COROUTINES
  virtual void bounce_map(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const  ::apache::thrift::fixtures::types::SomeMap& m);
  static folly::exception_wrapper recv_wrapped_bounce_map( ::apache::thrift::fixtures::types::SomeMap& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_bounce_map( ::apache::thrift::fixtures::types::SomeMap& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_bounce_map( ::apache::thrift::fixtures::types::SomeMap& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_bounce_map( ::apache::thrift::fixtures::types::SomeMap& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void bounce_mapT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const  ::apache::thrift::fixtures::types::SomeMap& m);
 public:
  virtual void binary_keyed_map(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::vector<int64_t>& r);
  virtual void binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::vector<int64_t>& r);
 protected:
  void binary_keyed_mapImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const ::std::vector<int64_t>& r);
 public:
  virtual void sync_binary_keyed_map(::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>& _return, const ::std::vector<int64_t>& r);
  virtual void sync_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, ::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>& _return, const ::std::vector<int64_t>& r);
  virtual folly::Future<::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>> future_binary_keyed_map(const ::std::vector<int64_t>& r);
  virtual folly::SemiFuture<::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>> semifuture_binary_keyed_map(const ::std::vector<int64_t>& r);
  virtual folly::Future<::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>> future_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<int64_t>& r);
  virtual folly::SemiFuture<::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>> semifuture_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<int64_t>& r);
private:
  folly::SemiFuture<::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>> semifuture_impl_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<int64_t>& r);
public:
  virtual folly::Future<std::pair<::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<int64_t>& r);
  virtual folly::SemiFuture<std::pair<::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<int64_t>& r);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>> co_binary_keyed_map(const ::std::vector<int64_t>& r) {
    ::apache::thrift::RpcOptions rpcOptions;
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_return co_await folly::coro::detachOnCancel(semifuture_impl_binary_keyed_map(rpcOptions, r));
    } else {
      co_return co_await semifuture_impl_binary_keyed_map(rpcOptions, r);
    }
  }
  template <int = 0>
  folly::coro::Task<::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>> co_binary_keyed_map(apache::thrift::RpcOptions& rpcOptions, const ::std::vector<int64_t>& r) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    if (cancelToken.canBeCancelled()) {
      co_return co_await folly::coro::detachOnCancel(semifuture_impl_binary_keyed_map(rpcOptions, r));
    } else {
      co_return co_await semifuture_impl_binary_keyed_map(rpcOptions, r);
    }
  }
#endif // FOLLY_HAS_COROUTINES
  virtual void binary_keyed_map(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::std::vector<int64_t>& r);
  static folly::exception_wrapper recv_wrapped_binary_keyed_map(::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_binary_keyed_map(::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_binary_keyed_map(::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_binary_keyed_map(::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void binary_keyed_mapT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback, const ::std::vector<int64_t>& r);
 public:
};

}}}} // apache::thrift::fixtures::types

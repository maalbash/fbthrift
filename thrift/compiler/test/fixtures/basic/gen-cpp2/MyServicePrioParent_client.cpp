/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "src/gen-cpp2/MyServicePrioParentAsyncClient.h"

#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>
#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> MyServicePrioParent_ping_pargs;
typedef apache::thrift::ThriftPresult<true> MyServicePrioParent_ping_presult;
typedef apache::thrift::ThriftPresult<false> MyServicePrioParent_pong_pargs;
typedef apache::thrift::ThriftPresult<true> MyServicePrioParent_pong_presult;

template <typename Protocol_>
void MyServicePrioParentAsyncClient::pingT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(getChannel()->getProtocolId());
  header->setHeaders(rpcOptions.releaseWriteHeaders());
  connectionContext_->setRequestHeader(header.get());
  std::unique_ptr<apache::thrift::ContextStack> ctx = this->getContextStack(this->getServiceName(), "MyServicePrioParent.ping", connectionContext_.get());
  MyServicePrioParent_ping_pargs args;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  apache::thrift::clientSendT<Protocol_>(prot, rpcOptions, std::move(callback), std::move(ctx), header, channel_.get(), "ping", writer, sizer, false, useSync);
  connectionContext_->setRequestHeader(nullptr);
}

template <typename Protocol_>
void MyServicePrioParentAsyncClient::pongT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(getChannel()->getProtocolId());
  header->setHeaders(rpcOptions.releaseWriteHeaders());
  connectionContext_->setRequestHeader(header.get());
  std::unique_ptr<apache::thrift::ContextStack> ctx = this->getContextStack(this->getServiceName(), "MyServicePrioParent.pong", connectionContext_.get());
  MyServicePrioParent_pong_pargs args;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  apache::thrift::clientSendT<Protocol_>(prot, rpcOptions, std::move(callback), std::move(ctx), header, channel_.get(), "pong", writer, sizer, false, useSync);
  connectionContext_->setRequestHeader(nullptr);
}



void MyServicePrioParentAsyncClient::ping(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  pingImpl(false, rpcOptions, std::move(callback));
}

void MyServicePrioParentAsyncClient::ping(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  pingImpl(false, rpcOptions, std::move(callback));
}

void MyServicePrioParentAsyncClient::pingImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      pingT(&writer, useSync, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      pingT(&writer, useSync, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

void MyServicePrioParentAsyncClient::sync_ping() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_ping(rpcOptions);
}

void MyServicePrioParentAsyncClient::sync_ping(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = std::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE);
  pingImpl(true, rpcOptions, std::move(callback));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(!!_returnState.exception());
    _returnState.exception().throw_exception();
  }
  recv_ping(_returnState);
}

folly::Future<folly::Unit> MyServicePrioParentAsyncClient::future_ping() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_ping(rpcOptions);
}

folly::Future<folly::Unit> MyServicePrioParentAsyncClient::future_ping(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_ping, channel_);
  ping(rpcOptions, std::move(callback));
  return _future;
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyServicePrioParentAsyncClient::header_future_ping(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_ping, channel_);
  ping(rpcOptions, std::move(callback));
  return _future;
}

void MyServicePrioParentAsyncClient::ping(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  ping(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

folly::exception_wrapper MyServicePrioParentAsyncClient::recv_wrapped_ping(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = MyServicePrioParent_ping_presult;
  constexpr auto const fname = "ping";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyServicePrioParentAsyncClient::recv_ping(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_ping(state);
  if (ew) {
    ew.throw_exception();
  }
}

void MyServicePrioParentAsyncClient::recv_instance_ping(::apache::thrift::ClientReceiveState& state) {
  recv_ping(state);
}

folly::exception_wrapper MyServicePrioParentAsyncClient::recv_instance_wrapped_ping(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_ping(state);
}

void MyServicePrioParentAsyncClient::pong(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  pongImpl(false, rpcOptions, std::move(callback));
}

void MyServicePrioParentAsyncClient::pong(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  pongImpl(false, rpcOptions, std::move(callback));
}

void MyServicePrioParentAsyncClient::pongImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      pongT(&writer, useSync, rpcOptions, std::move(callback));
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      pongT(&writer, useSync, rpcOptions, std::move(callback));
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

void MyServicePrioParentAsyncClient::sync_pong() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_pong(rpcOptions);
}

void MyServicePrioParentAsyncClient::sync_pong(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = std::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE);
  pongImpl(true, rpcOptions, std::move(callback));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(!!_returnState.exception());
    _returnState.exception().throw_exception();
  }
  recv_pong(_returnState);
}

folly::Future<folly::Unit> MyServicePrioParentAsyncClient::future_pong() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_pong(rpcOptions);
}

folly::Future<folly::Unit> MyServicePrioParentAsyncClient::future_pong(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_pong, channel_);
  pong(rpcOptions, std::move(callback));
  return _future;
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyServicePrioParentAsyncClient::header_future_pong(apache::thrift::RpcOptions& rpcOptions) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_pong, channel_);
  pong(rpcOptions, std::move(callback));
  return _future;
}

void MyServicePrioParentAsyncClient::pong(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  pong(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

folly::exception_wrapper MyServicePrioParentAsyncClient::recv_wrapped_pong(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = MyServicePrioParent_pong_presult;
  constexpr auto const fname = "pong";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyServicePrioParentAsyncClient::recv_pong(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_pong(state);
  if (ew) {
    ew.throw_exception();
  }
}

void MyServicePrioParentAsyncClient::recv_instance_pong(::apache::thrift::ClientReceiveState& state) {
  recv_pong(state);
}

folly::exception_wrapper MyServicePrioParentAsyncClient::recv_instance_wrapped_pong(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_pong(state);
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift

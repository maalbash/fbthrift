/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/MyService.h"
#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/MyService.tcc"
#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> MyServiceSvIf::getProcessor() {
  return std::make_unique<MyServiceAsyncProcessor>(this);
}


void MyServiceSvIf::foo() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("foo");
}

folly::SemiFuture<folly::Unit> MyServiceSvIf::semifuture_foo() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_foo.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  foo();
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> MyServiceSvIf::future_foo() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_foo.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_foo(), getInternalKeepAlive());
}

void MyServiceSvIf::async_tm_foo(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_foo.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_foo.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_foo();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_foo();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        foo();
        callback->done();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void MyServiceSvNull::foo() {
  return;
}



::std::int32_t MyServiceSvIf::MyInteractionIf::frobnicate() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("frobnicate");
}

folly::SemiFuture<::std::int32_t> MyServiceSvIf::MyInteractionIf::semifuture_frobnicate() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_frobnicate.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return frobnicate();
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<::std::int32_t> MyServiceSvIf::MyInteractionIf::co_frobnicate() {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_frobnicate.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return folly::coro::toTask(semifuture_frobnicate());
}

folly::coro::Task<::std::int32_t> MyServiceSvIf::MyInteractionIf::co_frobnicate(apache::thrift::RequestParams /* params */) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_frobnicate.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_frobnicate();
}
#endif // FOLLY_HAS_COROUTINES

void MyServiceSvIf::MyInteractionIf::async_tm_frobnicate(std::unique_ptr<apache::thrift::HandlerCallback<::std::int32_t>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_frobnicate.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_frobnicate.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager(), callback->getEventBase()};
        auto task = co_frobnicate(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_frobnicate.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_frobnicate();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager(), callback->getEventBase()};
        auto task = co_frobnicate(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_frobnicate();
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(frobnicate());
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void MyServiceSvIf::MyInteractionIf::ping() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("ping");
}

folly::SemiFuture<folly::Unit> MyServiceSvIf::MyInteractionIf::semifuture_ping() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_ping.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  ping();
  return folly::makeSemiFuture();
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<void> MyServiceSvIf::MyInteractionIf::co_ping() {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_ping.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return folly::coro::toTask(semifuture_ping());
}

folly::coro::Task<void> MyServiceSvIf::MyInteractionIf::co_ping(apache::thrift::RequestParams /* params */) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_ping.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_ping();
}
#endif // FOLLY_HAS_COROUTINES

void MyServiceSvIf::MyInteractionIf::async_tm_ping(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_ping.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_ping.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager(), callback->getEventBase()};
        auto task = co_ping(params);
        apache::thrift::detail::si::async_tm_coro_oneway(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_ping.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_ping();
        apache::thrift::detail::si::async_tm_semifuture_oneway(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager(), callback->getEventBase()};
        auto task = co_ping(params);
        apache::thrift::detail::si::async_tm_coro_oneway(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_ping();
        apache::thrift::detail::si::async_tm_coro_oneway(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ping();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

::apache::thrift::ServerStream<bool> MyServiceSvIf::MyInteractionIf::truthify() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("truthify");
}

folly::SemiFuture<::apache::thrift::ServerStream<bool>> MyServiceSvIf::MyInteractionIf::semifuture_truthify() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_truthify.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return truthify();
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<::apache::thrift::ServerStream<bool>> MyServiceSvIf::MyInteractionIf::co_truthify() {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_truthify.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return folly::coro::toTask(semifuture_truthify());
}

folly::coro::Task<::apache::thrift::ServerStream<bool>> MyServiceSvIf::MyInteractionIf::co_truthify(apache::thrift::RequestParams /* params */) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_truthify.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_truthify();
}
#endif // FOLLY_HAS_COROUTINES

void MyServiceSvIf::MyInteractionIf::async_tm_truthify(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ServerStream<bool>>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_truthify.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_truthify.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager(), callback->getEventBase()};
        auto task = co_truthify(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_truthify.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_truthify();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager(), callback->getEventBase()};
        auto task = co_truthify(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_truthify();
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(truthify());
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

::apache::thrift::ResponseAndSinkConsumer<::std::set<float>, ::std::string, ::std::string> MyServiceSvIf::MyInteractionIf::encode() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("encode");
}

folly::SemiFuture<::apache::thrift::ResponseAndSinkConsumer<::std::set<float>, ::std::string, ::std::string>> MyServiceSvIf::MyInteractionIf::semifuture_encode() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_encode.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return encode();
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<::apache::thrift::ResponseAndSinkConsumer<::std::set<float>, ::std::string, ::std::string>> MyServiceSvIf::MyInteractionIf::co_encode() {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_encode.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return folly::coro::toTask(semifuture_encode());
}

folly::coro::Task<::apache::thrift::ResponseAndSinkConsumer<::std::set<float>, ::std::string, ::std::string>> MyServiceSvIf::MyInteractionIf::co_encode(apache::thrift::RequestParams /* params */) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_encode.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_encode();
}
#endif // FOLLY_HAS_COROUTINES

void MyServiceSvIf::MyInteractionIf::async_tm_encode(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ResponseAndSinkConsumer<::std::set<float>, ::std::string, ::std::string>>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_encode.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_encode.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager(), callback->getEventBase()};
        auto task = co_encode(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_encode.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_encode();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager(), callback->getEventBase()};
        auto task = co_encode(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_encode();
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(encode());
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void MyServiceSvIf::MyInteractionFastIf::async_eb_frobnicate(std::unique_ptr<apache::thrift::HandlerCallback<::std::int32_t>> callback) {
  callback->exception(apache::thrift::TApplicationException("Function frobnicate is unimplemented"));
}

void MyServiceSvIf::MyInteractionFastIf::async_eb_ping(std::unique_ptr<apache::thrift::HandlerCallbackBase> /*callback*/) {
  LOG(DFATAL) << "Function ping is unimplemented";
}

void MyServiceSvIf::MyInteractionFastIf::async_eb_truthify(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ServerStream<bool>>> callback) {
  callback->exception(apache::thrift::TApplicationException("Function truthify is unimplemented"));
}

void MyServiceSvIf::MyInteractionFastIf::async_eb_encode(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ResponseAndSinkConsumer<::std::set<float>, ::std::string, ::std::string>>> callback) {
  callback->exception(apache::thrift::TApplicationException("Function encode is unimplemented"));
}

void MyServiceSvIf::SerialInteractionIf::frobnicate() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("frobnicate");
}

folly::SemiFuture<folly::Unit> MyServiceSvIf::SerialInteractionIf::semifuture_frobnicate() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_frobnicate.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  frobnicate();
  return folly::makeSemiFuture();
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<void> MyServiceSvIf::SerialInteractionIf::co_frobnicate() {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_frobnicate.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return folly::coro::toTask(semifuture_frobnicate());
}

folly::coro::Task<void> MyServiceSvIf::SerialInteractionIf::co_frobnicate(apache::thrift::RequestParams /* params */) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_frobnicate.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_frobnicate();
}
#endif // FOLLY_HAS_COROUTINES

void MyServiceSvIf::SerialInteractionIf::async_tm_frobnicate(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_frobnicate.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_frobnicate.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager(), callback->getEventBase()};
        auto task = co_frobnicate(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_frobnicate.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_frobnicate();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager(), callback->getEventBase()};
        auto task = co_frobnicate(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_frobnicate();
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        frobnicate();
        callback->done();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

const char* MyServiceAsyncProcessor::getServiceName() {
  return "MyService";
}

void MyServiceAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<MyServiceSvIf>::gen(*response.metadata_ref(), *response.context_ref());
}

void MyServiceAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

const MyServiceAsyncProcessor::ProcessMap& MyServiceAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const MyServiceAsyncProcessor::ProcessMap MyServiceAsyncProcessor::binaryProcessMap_ {
  {"foo", &MyServiceAsyncProcessor::setUpAndProcess_foo<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"MyInteraction.frobnicate", &MyServiceAsyncProcessor::setUpAndProcess_MyInteraction_frobnicate<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"MyInteraction.ping", &MyServiceAsyncProcessor::setUpAndProcess_MyInteraction_ping<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"MyInteraction.truthify", &MyServiceAsyncProcessor::setUpAndProcess_MyInteraction_truthify<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"MyInteraction.encode", &MyServiceAsyncProcessor::setUpAndProcess_MyInteraction_encode<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"MyInteractionFast.frobnicate", &MyServiceAsyncProcessor::setUpAndProcess_MyInteractionFast_frobnicate<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"MyInteractionFast.ping", &MyServiceAsyncProcessor::setUpAndProcess_MyInteractionFast_ping<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"MyInteractionFast.truthify", &MyServiceAsyncProcessor::setUpAndProcess_MyInteractionFast_truthify<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"MyInteractionFast.encode", &MyServiceAsyncProcessor::setUpAndProcess_MyInteractionFast_encode<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"SerialInteraction.frobnicate", &MyServiceAsyncProcessor::setUpAndProcess_SerialInteraction_frobnicate<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const MyServiceAsyncProcessor::ProcessMap& MyServiceAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const MyServiceAsyncProcessor::ProcessMap MyServiceAsyncProcessor::compactProcessMap_ {
  {"foo", &MyServiceAsyncProcessor::setUpAndProcess_foo<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"MyInteraction.frobnicate", &MyServiceAsyncProcessor::setUpAndProcess_MyInteraction_frobnicate<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"MyInteraction.ping", &MyServiceAsyncProcessor::setUpAndProcess_MyInteraction_ping<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"MyInteraction.truthify", &MyServiceAsyncProcessor::setUpAndProcess_MyInteraction_truthify<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"MyInteraction.encode", &MyServiceAsyncProcessor::setUpAndProcess_MyInteraction_encode<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"MyInteractionFast.frobnicate", &MyServiceAsyncProcessor::setUpAndProcess_MyInteractionFast_frobnicate<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"MyInteractionFast.ping", &MyServiceAsyncProcessor::setUpAndProcess_MyInteractionFast_ping<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"MyInteractionFast.truthify", &MyServiceAsyncProcessor::setUpAndProcess_MyInteractionFast_truthify<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"MyInteractionFast.encode", &MyServiceAsyncProcessor::setUpAndProcess_MyInteractionFast_encode<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"SerialInteraction.frobnicate", &MyServiceAsyncProcessor::setUpAndProcess_SerialInteraction_frobnicate<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

const MyServiceAsyncProcessor::InteractionConstructorMap& MyServiceAsyncProcessor::getInteractionConstructorMap() {
  return interactionConstructorMap_;
}

const MyServiceAsyncProcessor::InteractionConstructorMap MyServiceAsyncProcessor::interactionConstructorMap_ {
  {"MyInteraction", &MyServiceAsyncProcessor::createMyInteraction},
  {"MyInteractionFast", &MyServiceAsyncProcessor::createMyInteractionFast},
  {"SerialInteraction", &MyServiceAsyncProcessor::createSerialInteraction},
};

std::unique_ptr<apache::thrift::Tile> MyServiceAsyncProcessor::createInteractionImpl(const std::string& name) {
  auto fn = getInteractionConstructorMap().at(name);
  return (this->*fn)();
}} // cpp2

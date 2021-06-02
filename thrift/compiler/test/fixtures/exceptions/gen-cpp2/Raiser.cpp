/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/exceptions/gen-cpp2/Raiser.h"
#include "thrift/compiler/test/fixtures/exceptions/gen-cpp2/Raiser.tcc"
#include "thrift/compiler/test/fixtures/exceptions/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> RaiserSvIf::getProcessor() {
  return std::make_unique<RaiserAsyncProcessor>(this);
}


void RaiserSvIf::doBland() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("doBland");
}

folly::SemiFuture<folly::Unit> RaiserSvIf::semifuture_doBland() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_doBland.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  doBland();
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> RaiserSvIf::future_doBland() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_doBland.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_doBland(), getInternalKeepAlive());
}

void RaiserSvIf::async_tm_doBland(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_doBland.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_doBland.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_doBland();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_doBland();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        doBland();
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

void RaiserSvIf::doRaise() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("doRaise");
}

folly::SemiFuture<folly::Unit> RaiserSvIf::semifuture_doRaise() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_doRaise.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  doRaise();
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> RaiserSvIf::future_doRaise() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_doRaise.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_doRaise(), getInternalKeepAlive());
}

void RaiserSvIf::async_tm_doRaise(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_doRaise.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_doRaise.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_doRaise();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_doRaise();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        doRaise();
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

void RaiserSvIf::get200(::std::string& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("get200");
}

folly::SemiFuture<std::unique_ptr<::std::string>> RaiserSvIf::semifuture_get200() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_get200.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  auto ret = std::make_unique<::std::string>();
  get200(*ret);
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<std::unique_ptr<::std::string>> RaiserSvIf::future_get200() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_get200.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_get200(), getInternalKeepAlive());
}

void RaiserSvIf::async_tm_get200(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_get200.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_get200.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_get200();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_get200();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::std::string _return;
        get200(_return);
        callback->result(_return);
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

void RaiserSvIf::get500(::std::string& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("get500");
}

folly::SemiFuture<std::unique_ptr<::std::string>> RaiserSvIf::semifuture_get500() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_get500.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  auto ret = std::make_unique<::std::string>();
  get500(*ret);
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<std::unique_ptr<::std::string>> RaiserSvIf::future_get500() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_get500.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_get500(), getInternalKeepAlive());
}

void RaiserSvIf::async_tm_get500(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we set that up
  // for all cases.
  apache::thrift::detail::si::async_tm_prep(this, callback.get());
  auto invocationType = __fbthrift_invocation_get500.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_get500.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_get500();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_get500();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::std::string _return;
        get500(_return);
        callback->result(_return);
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

void RaiserSvNull::doBland() {
  return;
}

void RaiserSvNull::doRaise() {
  return;
}

void RaiserSvNull::get200(::std::string& /*_return*/) {}

void RaiserSvNull::get500(::std::string& /*_return*/) {}



const char* RaiserAsyncProcessor::getServiceName() {
  return "Raiser";
}

void RaiserAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<RaiserSvIf>::gen(*response.metadata_ref(), *response.context_ref());
}

void RaiserAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

const RaiserAsyncProcessor::ProcessMap& RaiserAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const RaiserAsyncProcessor::ProcessMap RaiserAsyncProcessor::binaryProcessMap_ {
  {"doBland", &RaiserAsyncProcessor::setUpAndProcess_doBland<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"doRaise", &RaiserAsyncProcessor::setUpAndProcess_doRaise<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"get200", &RaiserAsyncProcessor::setUpAndProcess_get200<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"get500", &RaiserAsyncProcessor::setUpAndProcess_get500<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const RaiserAsyncProcessor::ProcessMap& RaiserAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const RaiserAsyncProcessor::ProcessMap RaiserAsyncProcessor::compactProcessMap_ {
  {"doBland", &RaiserAsyncProcessor::setUpAndProcess_doBland<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"doRaise", &RaiserAsyncProcessor::setUpAndProcess_doRaise<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"get200", &RaiserAsyncProcessor::setUpAndProcess_get200<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"get500", &RaiserAsyncProcessor::setUpAndProcess_get500<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2

/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyServicePrioParentAsyncClient.h"
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {

class MyServicePrioParentSvAsyncIf {
 public:
  virtual ~MyServicePrioParentSvAsyncIf() {}
  virtual void async_tm_ping(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual folly::Future<folly::Unit> future_ping() = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_ping() = 0;
  virtual void async_tm_pong(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual folly::Future<folly::Unit> future_pong() = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_pong() = 0;
};

class MyServicePrioParentAsyncProcessor;

class MyServicePrioParentSvIf : public MyServicePrioParentSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef MyServicePrioParentAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;


  virtual void ping();
  folly::Future<folly::Unit> future_ping() override;
  folly::SemiFuture<folly::Unit> semifuture_ping() override;
  void async_tm_ping(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
  virtual void pong();
  folly::Future<folly::Unit> future_pong() override;
  folly::SemiFuture<folly::Unit> semifuture_pong() override;
  void async_tm_pong(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
 private:
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_ping{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_pong{apache::thrift::detail::si::InvocationType::AsyncTm};
};

class MyServicePrioParentSvNull : public MyServicePrioParentSvIf {
 public:
  void ping() override;
  void pong() override;
};

class MyServicePrioParentAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  MyServicePrioParentSvIf* iface_;
 public:
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 public:
  using ProcessFunc = GeneratedAsyncProcessor::ProcessFunc<MyServicePrioParentAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFunc>;
  static const MyServicePrioParentAsyncProcessor::ProcessMap& getBinaryProtocolProcessMap();
  static const MyServicePrioParentAsyncProcessor::ProcessMap& getCompactProtocolProcessMap();
 private:
  static const MyServicePrioParentAsyncProcessor::ProcessMap binaryProcessMap_;
  static const MyServicePrioParentAsyncProcessor::ProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_ping(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_ping(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::LegacySerializedResponse return_ping(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_ping(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_pong(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_pong(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::LegacySerializedResponse return_pong(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_pong(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  MyServicePrioParentAsyncProcessor(MyServicePrioParentSvIf* iface) :
      iface_(iface) {}

  virtual ~MyServicePrioParentAsyncProcessor() {}
};

} // cpp2

/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/stream/gen-cpp2/PubSubStreamingServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/stream/gen-cpp2/module_types.h"
#include <thrift/lib/cpp2/async/ServerStream.h>

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

class PubSubStreamingServiceSvAsyncIf {
 public:
  virtual ~PubSubStreamingServiceSvAsyncIf() {}
  virtual void async_tm_returnstream(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ServerStream<::std::int32_t>>> callback, ::std::int32_t p_i32_from, ::std::int32_t p_i32_to) = 0;
  virtual folly::Future<::apache::thrift::ServerStream<::std::int32_t>> future_returnstream(::std::int32_t p_i32_from, ::std::int32_t p_i32_to) = 0;
  virtual folly::SemiFuture<::apache::thrift::ServerStream<::std::int32_t>> semifuture_returnstream(::std::int32_t p_i32_from, ::std::int32_t p_i32_to) = 0;
  virtual void async_tm_streamthrows(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ServerStream<::std::int32_t>>> callback, ::std::int32_t p_foo) = 0;
  virtual folly::Future<::apache::thrift::ServerStream<::std::int32_t>> future_streamthrows(::std::int32_t p_foo) = 0;
  virtual folly::SemiFuture<::apache::thrift::ServerStream<::std::int32_t>> semifuture_streamthrows(::std::int32_t p_foo) = 0;
  virtual void async_tm_boththrows(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ServerStream<::std::int32_t>>> callback, ::std::int32_t p_foo) = 0;
  virtual folly::Future<::apache::thrift::ServerStream<::std::int32_t>> future_boththrows(::std::int32_t p_foo) = 0;
  virtual folly::SemiFuture<::apache::thrift::ServerStream<::std::int32_t>> semifuture_boththrows(::std::int32_t p_foo) = 0;
  virtual void async_tm_responseandstreamthrows(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ResponseAndServerStream<::std::int32_t, ::std::int32_t>>> callback, ::std::int32_t p_foo) = 0;
  virtual folly::Future<::apache::thrift::ResponseAndServerStream<::std::int32_t, ::std::int32_t>> future_responseandstreamthrows(::std::int32_t p_foo) = 0;
  virtual folly::SemiFuture<::apache::thrift::ResponseAndServerStream<::std::int32_t, ::std::int32_t>> semifuture_responseandstreamthrows(::std::int32_t p_foo) = 0;
  virtual void async_eb_returnstreamFast(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ServerStream<::std::int32_t>>> callback, ::std::int32_t p_i32_from, ::std::int32_t p_i32_to) = 0;
};

class PubSubStreamingServiceAsyncProcessor;

class PubSubStreamingServiceSvIf : public PubSubStreamingServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef PubSubStreamingServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;


  virtual ::apache::thrift::ServerStream<::std::int32_t> returnstream(::std::int32_t /*i32_from*/, ::std::int32_t /*i32_to*/);
  folly::Future<::apache::thrift::ServerStream<::std::int32_t>> future_returnstream(::std::int32_t p_i32_from, ::std::int32_t p_i32_to) override;
  folly::SemiFuture<::apache::thrift::ServerStream<::std::int32_t>> semifuture_returnstream(::std::int32_t p_i32_from, ::std::int32_t p_i32_to) override;
  void async_tm_returnstream(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ServerStream<::std::int32_t>>> callback, ::std::int32_t p_i32_from, ::std::int32_t p_i32_to) override;
  virtual ::apache::thrift::ServerStream<::std::int32_t> streamthrows(::std::int32_t /*foo*/);
  folly::Future<::apache::thrift::ServerStream<::std::int32_t>> future_streamthrows(::std::int32_t p_foo) override;
  folly::SemiFuture<::apache::thrift::ServerStream<::std::int32_t>> semifuture_streamthrows(::std::int32_t p_foo) override;
  void async_tm_streamthrows(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ServerStream<::std::int32_t>>> callback, ::std::int32_t p_foo) override;
  virtual ::apache::thrift::ServerStream<::std::int32_t> boththrows(::std::int32_t /*foo*/);
  folly::Future<::apache::thrift::ServerStream<::std::int32_t>> future_boththrows(::std::int32_t p_foo) override;
  folly::SemiFuture<::apache::thrift::ServerStream<::std::int32_t>> semifuture_boththrows(::std::int32_t p_foo) override;
  void async_tm_boththrows(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ServerStream<::std::int32_t>>> callback, ::std::int32_t p_foo) override;
  virtual ::apache::thrift::ResponseAndServerStream<::std::int32_t, ::std::int32_t> responseandstreamthrows(::std::int32_t /*foo*/);
  folly::Future<::apache::thrift::ResponseAndServerStream<::std::int32_t, ::std::int32_t>> future_responseandstreamthrows(::std::int32_t p_foo) override;
  folly::SemiFuture<::apache::thrift::ResponseAndServerStream<::std::int32_t, ::std::int32_t>> semifuture_responseandstreamthrows(::std::int32_t p_foo) override;
  void async_tm_responseandstreamthrows(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ResponseAndServerStream<::std::int32_t, ::std::int32_t>>> callback, ::std::int32_t p_foo) override;
  void async_eb_returnstreamFast(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::ServerStream<::std::int32_t>>> callback, ::std::int32_t p_i32_from, ::std::int32_t p_i32_to) override;
 private:
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_returnstream{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_streamthrows{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_boththrows{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_responseandstreamthrows{apache::thrift::detail::si::InvocationType::AsyncTm};
};

class PubSubStreamingServiceSvNull : public PubSubStreamingServiceSvIf {
 public:
};

class PubSubStreamingServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  PubSubStreamingServiceSvIf* iface_;
 public:
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 public:
  using ProcessFunc = GeneratedAsyncProcessor::ProcessFunc<PubSubStreamingServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFunc>;
  static const PubSubStreamingServiceAsyncProcessor::ProcessMap& getBinaryProtocolProcessMap();
  static const PubSubStreamingServiceAsyncProcessor::ProcessMap& getCompactProtocolProcessMap();
 private:
  static const PubSubStreamingServiceAsyncProcessor::ProcessMap binaryProcessMap_;
  static const PubSubStreamingServiceAsyncProcessor::ProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_returnstream(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_returnstream(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::ResponseAndServerStreamFactory return_returnstream(int32_t protoSeqId, apache::thrift::ContextStack* ctx, folly::Executor::KeepAlive<> executor, ::apache::thrift::ServerStream<::std::int32_t>&& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_returnstream(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_streamthrows(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_streamthrows(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::ResponseAndServerStreamFactory return_streamthrows(int32_t protoSeqId, apache::thrift::ContextStack* ctx, folly::Executor::KeepAlive<> executor, ::apache::thrift::ServerStream<::std::int32_t>&& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_streamthrows(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_boththrows(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_boththrows(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::ResponseAndServerStreamFactory return_boththrows(int32_t protoSeqId, apache::thrift::ContextStack* ctx, folly::Executor::KeepAlive<> executor, ::apache::thrift::ServerStream<::std::int32_t>&& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_boththrows(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_responseandstreamthrows(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_responseandstreamthrows(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::ResponseAndServerStreamFactory return_responseandstreamthrows(int32_t protoSeqId, apache::thrift::ContextStack* ctx, folly::Executor::KeepAlive<> executor, ::apache::thrift::ResponseAndServerStream<::std::int32_t, ::std::int32_t>&& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_responseandstreamthrows(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_returnstreamFast(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_returnstreamFast(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::ResponseAndServerStreamFactory return_returnstreamFast(int32_t protoSeqId, apache::thrift::ContextStack* ctx, folly::Executor::KeepAlive<> executor, ::apache::thrift::ServerStream<::std::int32_t>&& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_returnstreamFast(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  PubSubStreamingServiceAsyncProcessor(PubSubStreamingServiceSvIf* iface) :
      iface_(iface) {}

  virtual ~PubSubStreamingServiceAsyncProcessor() {}
};

} // cpp2

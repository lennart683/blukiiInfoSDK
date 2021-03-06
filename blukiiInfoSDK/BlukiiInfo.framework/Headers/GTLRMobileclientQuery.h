// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   mobileclient/v1
// Description:
//   This is an API

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRMobileclient_GetBlukiisInfoData;
@class GTLRMobileclient_GetInfoBundlesData;
@class GTLRMobileclient_ReportInfoPointData;
@class GTLRMobileclient_ReportInfoStatisticData;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Mobileclient query classes.
 */
@interface GTLRMobileclientQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  GTLRMobileclientQuery_MobileClientApiGetBlukiisInfo
 *
 *  Method: mobileclient.mobileClientApi.getBlukiisInfo
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMobileclientUserinfoEmail
 */
@interface GTLRMobileclientQuery_MobileClientApiGetBlukiisInfo : GTLRMobileclientQuery
// Previous library name was
//   +[GTLQueryMobileclient queryForMobileClientApiGetBlukiisInfoWithObject:]

/**
 *  Fetches a @c GTLRMobileclient_InfoPointV1Collection.
 *
 *  @param object The @c GTLRMobileclient_GetBlukiisInfoData to include in the
 *    query.
 *
 *  @return GTLRMobileclientQuery_MobileClientApiGetBlukiisInfo
 */
+ (instancetype)queryWithObject:(GTLRMobileclient_GetBlukiisInfoData *)object;

@end

/**
 *  GTLRMobileclientQuery_MobileClientApiGetBlukiisInfoV2
 *
 *  Method: mobileclient.mobileClientApi.getBlukiisInfoV2
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMobileclientUserinfoEmail
 */
@interface GTLRMobileclientQuery_MobileClientApiGetBlukiisInfoV2 : GTLRMobileclientQuery
// Previous library name was
//   +[GTLQueryMobileclient queryForMobileClientApiGetBlukiisInfoV2WithObject:]

/**
 *  Fetches a @c GTLRMobileclient_BlukiiInfoCollection.
 *
 *  @param object The @c GTLRMobileclient_GetBlukiisInfoData to include in the
 *    query.
 *
 *  @return GTLRMobileclientQuery_MobileClientApiGetBlukiisInfoV2
 */
+ (instancetype)queryWithObject:(GTLRMobileclient_GetBlukiisInfoData *)object;

@end

/**
 *  GTLRMobileclientQuery_MobileClientApiGetInfoBundles
 *
 *  Method: mobileclient.mobileClientApi.getInfoBundles
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMobileclientUserinfoEmail
 */
@interface GTLRMobileclientQuery_MobileClientApiGetInfoBundles : GTLRMobileclientQuery
// Previous library name was
//   +[GTLQueryMobileclient queryForMobileClientApiGetInfoBundlesWithObject:]

/**
 *  Fetches a @c GTLRMobileclient_InfoBundleCollection.
 *
 *  @param object The @c GTLRMobileclient_GetInfoBundlesData to include in the
 *    query.
 *
 *  @return GTLRMobileclientQuery_MobileClientApiGetInfoBundles
 */
+ (instancetype)queryWithObject:(GTLRMobileclient_GetInfoBundlesData *)object;

@end

/**
 *  GTLRMobileclientQuery_MobileClientApiReportInfoClick
 *
 *  Method: mobileclient.mobileClientApi.reportInfoClick
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMobileclientUserinfoEmail
 */
@interface GTLRMobileclientQuery_MobileClientApiReportInfoClick : GTLRMobileclientQuery
// Previous library name was
//   +[GTLQueryMobileclient queryForMobileClientApiReportInfoClickWithObject:]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  @param object The @c GTLRMobileclient_ReportInfoStatisticData to include in
 *    the query.
 *
 *  @return GTLRMobileclientQuery_MobileClientApiReportInfoClick
 */
+ (instancetype)queryWithObject:(GTLRMobileclient_ReportInfoStatisticData *)object;

@end

/**
 *  GTLRMobileclientQuery_MobileClientApiReportInfoPoint
 *
 *  Method: mobileclient.mobileClientApi.reportInfoPoint
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMobileclientUserinfoEmail
 */
@interface GTLRMobileclientQuery_MobileClientApiReportInfoPoint : GTLRMobileclientQuery
// Previous library name was
//   +[GTLQueryMobileclient queryForMobileClientApiReportInfoPointWithObject:]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  @param object The @c GTLRMobileclient_ReportInfoPointData to include in the
 *    query.
 *
 *  @return GTLRMobileclientQuery_MobileClientApiReportInfoPoint
 */
+ (instancetype)queryWithObject:(GTLRMobileclient_ReportInfoPointData *)object;

@end

/**
 *  GTLRMobileclientQuery_MobileClientApiReportInfoPointV2
 *
 *  Method: mobileclient.mobileClientApi.reportInfoPointV2
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMobileclientUserinfoEmail
 */
@interface GTLRMobileclientQuery_MobileClientApiReportInfoPointV2 : GTLRMobileclientQuery
// Previous library name was
//   +[GTLQueryMobileclient queryForMobileClientApiReportInfoPointV2WithObject:]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  @param object The @c GTLRMobileclient_ReportInfoPointData to include in the
 *    query.
 *
 *  @return GTLRMobileclientQuery_MobileClientApiReportInfoPointV2
 */
+ (instancetype)queryWithObject:(GTLRMobileclient_ReportInfoPointData *)object;

@end

/**
 *  GTLRMobileclientQuery_MobileClientApiReportInfoStatistic
 *
 *  Method: mobileclient.mobileClientApi.reportInfoStatistic
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeMobileclientUserinfoEmail
 */
@interface GTLRMobileclientQuery_MobileClientApiReportInfoStatistic : GTLRMobileclientQuery
// Previous library name was
//   +[GTLQueryMobileclient queryForMobileClientApiReportInfoStatisticWithObject:]

/**
 *  Upon successful completion, the callback's object and error parameters will
 *  be nil. This query does not fetch an object.
 *
 *  @param object The @c GTLRMobileclient_ReportInfoStatisticData to include in
 *    the query.
 *
 *  @return GTLRMobileclientQuery_MobileClientApiReportInfoStatistic
 */
+ (instancetype)queryWithObject:(GTLRMobileclient_ReportInfoStatisticData *)object;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop

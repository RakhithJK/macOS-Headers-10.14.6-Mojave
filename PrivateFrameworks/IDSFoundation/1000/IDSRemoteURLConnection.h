//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURLRequest;
@protocol OS_xpc_object;

@interface IDSRemoteURLConnection : NSObject
{
    NSURLRequest *_request;
    NSString *_bundleIdentifierForDataUsage;
    CDUnknownBlockType _block;
    NSObject<OS_xpc_object> *_connection;
    BOOL _cancelled;
    BOOL _loading;
    BOOL _forceCellularIfPossible;
    BOOL _alwaysForceCellular;
    int _retries;
    BOOL _requireIDSHost;
    BOOL _shouldUsePipelining;
    int _concurrentConnections;
    BOOL _disableKeepAlive;
    int _keepAliveWifi;
    int _keepAliveCell;
    BOOL _shouldReturnTimingData;
}

@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
@property BOOL alwaysForceCellular; // @synthesize alwaysForceCellular=_alwaysForceCellular;
@property BOOL shouldReturnTimingData; // @synthesize shouldReturnTimingData=_shouldReturnTimingData;
@property int keepAliveCell; // @synthesize keepAliveCell=_keepAliveCell;
@property int keepAliveWifi; // @synthesize keepAliveWifi=_keepAliveWifi;
@property BOOL disableKeepAlive; // @synthesize disableKeepAlive=_disableKeepAlive;
@property int concurrentConnections; // @synthesize concurrentConnections=_concurrentConnections;
@property BOOL shouldUsePipelining; // @synthesize shouldUsePipelining=_shouldUsePipelining;
@property BOOL requireIDSHost; // @synthesize requireIDSHost=_requireIDSHost;
@property(retain) NSString *bundleIdentifierForDataUsage; // @synthesize bundleIdentifierForDataUsage=_bundleIdentifierForDataUsage;
@property BOOL forceCellularIfPossible; // @synthesize forceCellularIfPossible=_forceCellularIfPossible;
- (void).cxx_destruct;
- (void)cancel;
- (void)load;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1 completionBlockWithTimingData:(CDUnknownBlockType)arg2;
- (id)initWithURLRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)_connect;
- (BOOL)_disconnect;
- (void)_disconnected;

@end


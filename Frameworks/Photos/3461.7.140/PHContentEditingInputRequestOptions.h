//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHContentEditingInputRequestOptions : NSObject
{
    BOOL _networkAccessAllowed;
    CDUnknownBlockType _canHandleAdjustmentData;
    CDUnknownBlockType _progressHandler;
}

@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
@property(copy, nonatomic) CDUnknownBlockType canHandleAdjustmentData; // @synthesize canHandleAdjustmentData=_canHandleAdjustmentData;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _OSLogDirectoryReference;

__attribute__((visibility("hidden")))
@interface _OSLogCollectionReference : NSObject
{
    _OSLogDirectoryReference *_diagnosticsDirectoryReference;
    _OSLogDirectoryReference *_timesyncReference;
    _OSLogDirectoryReference *_UUIDTextReference;
}

+ (id)localDBRefWithError:(id *)arg1;
+ (id)referenceWithURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _OSLogDirectoryReference *UUIDTextReference; // @synthesize UUIDTextReference=_UUIDTextReference;
@property(readonly, nonatomic) _OSLogDirectoryReference *timesyncReference; // @synthesize timesyncReference=_timesyncReference;
@property(readonly, nonatomic) _OSLogDirectoryReference *diagnosticsDirectoryReference; // @synthesize diagnosticsDirectoryReference=_diagnosticsDirectoryReference;
- (void).cxx_destruct;
- (void)close;
- (id)initWithDiagnosticsDirectory:(id)arg1 timesyncDirectory:(id)arg2 UUIDTextDirectory:(id)arg3;

@end


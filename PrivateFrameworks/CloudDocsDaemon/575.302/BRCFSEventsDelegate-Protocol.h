//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/NSObject-Protocol.h>

@class BRCRelativePath, NSString;

@protocol BRCFSEventsDelegate <NSObject>
- (void)fseventRecursiveAtRoot:(BRCRelativePath *)arg1 withReason:(NSString *)arg2;
- (void)fseventAtPath:(BRCRelativePath *)arg1 flags:(unsigned int)arg2;
- (void)fseventAtPath:(BRCRelativePath *)arg1 flags:(unsigned int)arg2 unresolvedLastPathComponent:(NSString *)arg3;
- (void)fseventAtPath:(BRCRelativePath *)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 unresolvedLastPathComponent:(NSString *)arg4;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocs/NSObject-Protocol.h>

@class BRProgressProxy, NSProgress, NSString;

@protocol BRProgressProxyDelegate <NSObject>

@optional
- (NSString *)progressProxy:(BRProgressProxy *)arg1 localizedDescriptionForProgress:(NSProgress *)arg2;
- (BOOL)progressProxy:(BRProgressProxy *)arg1 shouldProxyProgress:(NSProgress *)arg2;
@end


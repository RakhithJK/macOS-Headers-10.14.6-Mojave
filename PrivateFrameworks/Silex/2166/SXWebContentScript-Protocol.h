//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSString, WKUserScript;

@protocol SXWebContentScript <NSObject>
@property(readonly, nonatomic) BOOL queueable;
@property(readonly, nonatomic) NSString *executableScript;
@property(readonly, nonatomic) WKUserScript *userScript;
@property(readonly, nonatomic) NSString *identifier;
@end


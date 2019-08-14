//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PackageKit/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol PKPackageReferable <NSObject>
@property(readonly) NSURL *URL;
@property(readonly) NSString *version;
@property(readonly) NSString *identifier;

@optional
@property(readonly) NSString *digest;
@property(readonly) NSString *MD5;
@property(readonly) unsigned long long fileSize;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSString, PKPackageReference;

@protocol SUURLSessionDownloadDelegate
- (void)saveCurrentState;
- (void)clearInvalidationForIdentifier:(NSString *)arg1 version:(NSString *)arg2 forReason:(int)arg3;
- (PKPackageReference *)packageReferenceForPackageIdentifier:(NSString *)arg1 productKey:(NSString *)arg2 invalidatingPreviousRef:(PKPackageReference *)arg3;
@end


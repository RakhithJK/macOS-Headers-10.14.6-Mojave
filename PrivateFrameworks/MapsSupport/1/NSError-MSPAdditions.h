//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (MSPAdditions)
@property(readonly) BOOL _maps_isFileNotFoundError;
@property(readonly) BOOL _maps_isCloudKitTokenExpirationError;
@property(readonly) BOOL _maps_isCloudKitErrorContainingNotFoundMarkersOnly;
- (BOOL)_maps_isCloudKitErrorWithCode:(long long)arg1 partialErrorsPolicy:(long long)arg2;
@end


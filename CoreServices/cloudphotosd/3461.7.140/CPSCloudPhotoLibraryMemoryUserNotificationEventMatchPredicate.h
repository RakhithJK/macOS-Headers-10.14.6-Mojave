//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICPAgentUserNotificationMatchPredicate.h"

@class NSString;

@interface CPSCloudPhotoLibraryMemoryUserNotificationEventMatchPredicate : ICPAgentUserNotificationMatchPredicate
{
    NSString *_memoryIdentifier;
}

+ (id)predicateWithMemoryIdentifier:(id)arg1;
@property(copy) NSString *memoryIdentifier; // @synthesize memoryIdentifier=_memoryIdentifier;
- (void).cxx_destruct;
- (BOOL)matchesUserNotification:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAMPCollection;

@interface SAMPAddMediaItemsToLibrary : SABaseClientBoundCommand
{
}

+ (id)addMediaItemsToLibraryWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addMediaItemsToLibrary;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SAMPCollection *mediaItems;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


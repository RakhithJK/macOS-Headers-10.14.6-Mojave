//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSOperation.h>

@class NSArray, NSMutableDictionary, NSObject;
@protocol IPHPublishServiceProtocol;

@interface PublishServiceContactUpdateOperation : NSOperation
{
    NSMutableDictionary *contacts;
    NSArray *lookupAccountIdentifiers;
    struct NSObject *plugin;
}

@property(retain) NSArray *lookupAccountIdentifiers; // @synthesize lookupAccountIdentifiers;
@property(retain) NSObject<IPHPublishServiceProtocol> *plugin; // @synthesize plugin;
@property(retain) NSMutableDictionary *contacts; // @synthesize contacts;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)main;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsAutocomplete/NSObject-Protocol.h>

@class CNAutocompleteFetchRequest;
@protocol CNCancelable;

@protocol CNAutocompleteSearch <NSObject>
- (id <CNCancelable>)executeRequest:(CNAutocompleteFetchRequest *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
@end

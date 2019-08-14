//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFMoreResults-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFMoreResults : NSObject <SFMoreResults, NSSecureCoding, NSCopying>
{
    NSString *_label;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadSearchResultsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadSearchResultsWithCompletionAndErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBURL;

@protocol _SFPBProduct <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) BOOL buyable;
@property(copy, nonatomic) NSString *displayName;
@property(retain, nonatomic) _SFPBURL *availabilityURL;
@property(copy, nonatomic) NSString *productIdentifier;
@property(copy, nonatomic) NSString *identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end


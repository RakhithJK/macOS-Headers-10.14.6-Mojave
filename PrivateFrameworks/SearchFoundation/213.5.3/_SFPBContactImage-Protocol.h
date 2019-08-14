//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol _SFPBContactImage <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) BOOL threeDTouchEnabled;
@property(copy, nonatomic) NSArray *contactIdentifiers;
@property(copy, nonatomic) NSString *contactIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)contactIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contactIdentifiersCount;
- (void)addContactIdentifiers:(NSString *)arg1;
- (void)clearContactIdentifiers;
@end


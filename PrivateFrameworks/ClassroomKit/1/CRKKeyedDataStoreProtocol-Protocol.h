//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class NSData, NSString;

@protocol CRKKeyedDataStoreProtocol <NSObject>
- (BOOL)removeDataForKey:(NSString *)arg1 error:(id *)arg2;
- (NSData *)dataForKey:(NSString *)arg1 error:(id *)arg2;
- (BOOL)setData:(NSData *)arg1 forKey:(NSString *)arg2 error:(id *)arg3;
@end

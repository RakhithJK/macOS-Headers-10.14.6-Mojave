//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCoding-Protocol.h>
#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSSecureCoding-Protocol.h>

@interface WBSDictionaryInt64 : NSObject <NSCoding, NSSecureCoding, NSCopying>
{
    unordered_map_fcbaed0a _map;
}

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) const unordered_map_fcbaed0a *map;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMovableMap:(unordered_map_fcbaed0a *)arg1;
- (id)initWithMap:(const unordered_map_fcbaed0a *)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShareKit/NSSecureCoding-Protocol.h>

@interface NSSharingMachPortWrapper : NSObject <NSSecureCoding>
{
    unsigned int _port;
}

+ (BOOL)supportsSecureCoding;
+ (id)wrapperForPort:(unsigned int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned int port;
- (void)dealloc;

@end


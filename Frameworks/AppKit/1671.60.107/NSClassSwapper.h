//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>

@class NSString;

@interface NSClassSwapper : NSObject <NSCoding>
{
    NSString *className;
    id template;
}

+ (void)initialize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setClassName:(id)arg1;
- (id)className;
- (void)setTemplate:(id)arg1;
- (id)template;
- (void)dealloc;
- (id)init;

@end


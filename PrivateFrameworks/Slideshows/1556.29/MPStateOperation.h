//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Slideshows/MPAction.h>

@class NSString;

@interface MPStateOperation : MPAction
{
    NSString *_operation;
    NSString *_stateKey;
}

+ (id)stateOperation;
@property(copy, nonatomic) NSString *stateKey; // @synthesize stateKey=_stateKey;
@property(copy, nonatomic) NSString *operation; // @synthesize operation=_operation;
- (void)setAction:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PXSItem;

@interface _PXSItemTextToken : NSObject
{
    NSString *_string;
    PXSItem *_item;
    struct _NSRange _effectiveRange;
}

@property(nonatomic) struct _NSRange effectiveRange; // @synthesize effectiveRange=_effectiveRange;
@property(retain, nonatomic) PXSItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)description;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSString, NSView;
@protocol IPAccessibilityProxyHostProtocol;

@interface IPAccessibilityProxy : NSObject
{
    NSString *_role;
    NSString *_title;
    NSView<IPAccessibilityProxyHostProtocol> *_view;
    struct CGRect _frame;
    int _index;
    unsigned int _key;
}

@property unsigned int key; // @synthesize key=_key;
@property int index; // @synthesize index=_index;
@property struct CGRect frame; // @synthesize frame=_frame;
@property NSView<IPAccessibilityProxyHostProtocol> *view; // @synthesize view=_view;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSString *role; // @synthesize role=_role;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsIgnored;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSPredicate, NSPredicateEditor;

@interface AMSmartGroupsPredicateViewController : NSViewController
{
    NSPredicate *_criteria;
    NSPredicateEditor *_editor;
}

@property __weak NSPredicateEditor *_editor; // @synthesize _editor;
@property(retain, nonatomic) NSPredicate *criteria; // @synthesize criteria=_criteria;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end


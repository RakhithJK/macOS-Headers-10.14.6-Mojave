//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <InputMethodKit/IMKUICandidateListView.h>

@class NSArray;

@interface IMKUISingleCandidateListView : IMKUICandidateListView
{
    NSArray *_selectionKeys;
}

@property(retain, nonatomic) NSArray *selectionKeys; // @synthesize selectionKeys=_selectionKeys;
- (void).cxx_destruct;
- (id)groupTitleForLineWithIndex:(long long)arg1;
- (void)didUpdateViewBounds;
- (id)viewForLineWithIndex:(long long)arg1 frame:(struct CGRect)arg2;

@end


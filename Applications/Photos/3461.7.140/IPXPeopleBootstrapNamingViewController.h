//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXViewController.h>

#import "IPXSearchViewControllerResultsDelegate-Protocol.h"
#import "IPXSearchViewControllerSizingDelegate-Protocol.h"
#import "PXPeopleFlowViewController-Protocol.h"

@class IPXFaceNameSearchViewController, NSString, PXPeopleBootstrapContext, PXPeopleNameSelection, RDPerson, UXView;
@protocol PXPeopleFlowViewControllerActionDelegate;

@interface IPXPeopleBootstrapNamingViewController : UXViewController <IPXSearchViewControllerResultsDelegate, IPXSearchViewControllerSizingDelegate, PXPeopleFlowViewController>
{
    id _context;
    id <PXPeopleFlowViewControllerActionDelegate> actionDelegate;
    IPXFaceNameSearchViewController *_nameSearchController;
    PXPeopleNameSelection *_selection;
    UXView *_namingView;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UXView *namingView; // @synthesize namingView=_namingView;
@property(retain, nonatomic) PXPeopleNameSelection *selection; // @synthesize selection=_selection;
@property(retain, nonatomic) IPXFaceNameSearchViewController *nameSearchController; // @synthesize nameSearchController=_nameSearchController;
@property(nonatomic) __weak id <PXPeopleFlowViewControllerActionDelegate> actionDelegate; // @synthesize actionDelegate;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)willTransitionToNextInFlow;
@property(readonly, nonatomic) struct CGSize preferredSize;
- (void)searchViewController:(id)arg1 didChangeSearchString:(id)arg2;
- (void)searchViewControllerDidEndFieldEditing:(id)arg1;
- (BOOL)searchViewControllerDidCancelSearch:(id)arg1;
- (id)searchViewControllerNoResultsString:(id)arg1;
- (void)searchViewController:(id)arg1 selectedSuggestion:(id)arg2 row:(long long)arg3;
- (id)_localizedTitleString;
- (void)_clearLastResultsWithForce:(BOOL)arg1;
- (void)_finishEditingWithString:(id)arg1;
@property(readonly, nonatomic) RDPerson *person;
@property(readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext;
- (void)_renamePerson:(id)arg1 toName:(id)arg2;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


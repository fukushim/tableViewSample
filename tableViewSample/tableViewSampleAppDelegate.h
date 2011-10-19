//
//  tableViewSampleAppDelegate.h
//  tableViewSample
//
//  Created by Mitsuteru Fukushima on 11/10/13.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface tableViewSampleAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
    NSPersistentStoreCoordinator *__persistentStoreCoordinator;
    NSManagedObjectModel *__managedObjectModel;
    NSManagedObjectContext *__managedObjectContext;
    NSOutlineView *_outlineView;
    IBOutlet NSTreeController *treeController;
//    NSFetchedResultsController* fetchedResultsController;
}
@property (assign) IBOutlet NSOutlineView *outlineView;
- (IBAction)addItem:(id)sender;
- (IBAction)Undo:(id)sender;
- (IBAction)Redo:(id)sender;
- (IBAction)delete:(id)sender;

@property (assign) IBOutlet NSWindow *window;

@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:sender;

@end

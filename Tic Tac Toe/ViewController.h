//
//  ViewController.h
//  Tic Tac Toe
//
//  Created by Student P_02 on 11/08/16.
//  Copyright © 2016 Purushottam Tayade. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    int numberOfTurns,currentPlayer;
    BOOL isGameFinished;
    
    NSArray *winningCombinations;
    NSMutableArray *currentState;
}
- (IBAction)buttonTapped:(id)sender;
@property (weak, nonatomic) IBOutlet UIImageView *player;



@end


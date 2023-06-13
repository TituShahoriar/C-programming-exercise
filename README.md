# C-programming-exercise
The exercises encompass diverse concepts including loops, control structures, functions, and pattern printing. They entail computing mathematical series, summing digits, calculating averages, and determining palindrome numbers, among other tasks.
m
yu
        +-----------------+
        |    QuizGUI      |
        +-----------------+
        | - userIdTextField : JTextField       |
        | - passwordField : JPasswordField    |
        | - loginButton : JButton              |
        | - questionLabel : JLabel             |
        | - answerButtons : JButton[]          |
        | - currentQuestionIndex : int         |
        | - questions : List<Question>         |
        | - userAnswers : List<Integer>        |
        | - currentUser : User                 |
        +-----------------+
        | + createLoginPanel() : JPanel        |
        | + createQuizPanel() : JPanel         |
        | + showPanel(JPanel) : void           |
        | + loadQuizQuestions() : void         |
        | + displayNextQuestion() : void       |
        | + showQuizResult() : void            |
        | + calculateScore() : int             |
        | + resetQuiz() : void                 |
        +-----------------+
                  ^
                  |
        +-----------------+
        |    Question     |
        +-----------------+
        | - question : String                  |
        | - choices : List<String>             |
        | - answerIndex : int                  |
        +-----------------+
        | + getQuestion() : String             |
        | + getChoices() : List<String>        |
        | + getAnswerIndex() : int             |
        +-----------------+
                  ^
                  |
        +-----------------+
        |      User       |
        +-----------------+
        | - userId : String                    |
        | - password : String                  |
        +-----------------+
        | + getUserId() : String               |
        | + getPassword() : String             |
        +-----------------+
                  ^
                  |
        +----------------------+
        | QuestionFileReader   |
        +----------------------+
        | - filename : String                 |
        +----------------------+
        | + readQuestions() : List<Question>  |
        +----------------------+
                  ^
                  |
        +----------------------+
        |  UserFileReader      |
        +----------------------+
        | - filename : String                 |
        +----------------------+
        | + readUsers() : List<User>          
        +----------------------+
